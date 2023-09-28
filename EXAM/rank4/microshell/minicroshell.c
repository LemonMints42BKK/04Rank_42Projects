/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minicroshell.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:38:19 by pnopjira          #+#    #+#             */
/*   Updated: 2023/09/28 02:36:46 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int fd;

static void perr(char* str);
static int  cd(char** argv, int i);
static int  exev(char** argv, char** envp, int i);

int main(int argc, char **argv, char **envp)
{
    int exit_status = 0;
    fd = dup(0);
    (void)argc;
    // (void)envp;
    while (*argv && *(argv + 1)){
        while (*argv){
            // printf("%s\n", *argv);
            argv++;
            int i = 0;
            while(argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
                i++;
            //  printf("%d\n", i);
            if(!strcmp(*argv, "cd"))
                exit_status = cd(argv, i);
            else if (i)
                exit_status = exev(argv, envp, i);
            argv += i;
        }
    }
    if (dup2(0,fd) == -1)
        perr("error: fatal\n");
    return(exit_status);
}

static void perr(char* str){
    while(*str)
        write(2, str++, 1);
    return ;
}

static int  cd(char** argv, int i){
    (void)argv;
    if ( i != 2)
        // printf ("%d\n",i);
        return(perr("error: cd: bad arguments\n"), 1);
    else if(chdir(argv[1]) == -1)
        // printf ("%d\n",i);
        return(perr("error: cd: cannot change directory to "), perr(argv[1]),perr("\n") ,1);
    return (0);
}

static int  exev(char** argv, char** envp, int i){
    // (void)argv;
    // (void)envp;
    int status;
    int fds[2];
    int pip = (argv[i] && !strcmp(argv[i], "|"));
    if (pip && pipe(fds) == -1)
        return (perr("error: fata\n"), 1);
    int id = fork();
    if (!id) {
        // printf ("parant fork()\n");
        argv[i] = NULL;
        if (dup2(fd, 0) == -1 || close(fd) == -1)
            return (perr("error: fatal\n"), 1);
        if (pip && (dup2(fds[1], 1) == -1 || close(fds[0]) == -1 || close(fds[1]) == -1))
            return (perr("error: fatal\n"), 1);
        execve(*argv, argv, envp);
        return (perr("error: cannot excute "), perr(*argv), perr("\n"), 1);
    }
    waitpid(id, &status, 0);
    if (!pip && dup2(0, fd) == -1)
        return (perr("error: fatal\n"), 1);
    if (pip && (dup2(fds[0], fd) == -1 || close(fds[0]) == -1 || close(fds[1]) == -1))
        return (perr("error: cannot excute "), perr(*argv), perr("\n"), 1);
    return WIFEXITED(status) && WEXITSTATUS(status);
}