/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:18:02 by pnopjira          #+#    #+#             */
/*   Updated: 2023/10/07 11:47:28 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

/*Part I: Libc functions*/
int		ft_isalpha(int c);
// int		ft_isdigit(int c);
// int		ft_isalnum(int c);
// int		ft_isascii(int c);
// int		ft_isprint(int c);
// size_t	ft_strlen(const char *s);
// void*   ft_memset(void *dest, int ch, size_t count );
// void	ft_bzero(void *s, size_t n);
// void*   ft_memcpy(void *to, const void *from, size_t numBytes);
// void*   ft_memmove(void *to, const void *from, size_t numBytes);
// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
// int		ft_toupper(int c);
// int		ft_tolower(int c);
// char*   ft_strchr(const char *str, int ch);
// char*   ft_strrchr(const char *str, int ch);
// int		ft_strncmp( const char *str1, const char *str2, size_t n );
// void*   ft_memchr(void *ptr, int ch, size_t count );
// int		ft_memcmp( const void *lhs, const void *rhs, size_t count );
// char*   ft_strnstr(const char *s1, const char *s2, size_t n);
// int		ft_atoi(const char *strn);
// void*   ft_calloc(size_t count, size_t size);
// char*   ft_strdup(const char *s);

// /*Part II: Additional functions*/
// char*   ft_substr(char const *s, unsigned int start, size_t len);
// char*   ft_strjoin(char const *s1, char const *s2);
// char*   ft_strtrim(char const *s1, char const *set);
// char**  ft_split(char const *s, char c);
// char*   ft_itoa(int n);
// char*   ft_strmapi(char const *s, char (*f)(unsigned int, char));
// void    ft_striteri(char *s, void (*f)(unsigned int, char*));
// void    ft_putchar_fd(char c, int fd);
// void    ft_putstr_fd(char *s, int fd);
// void    ft_putendl_fd(char *s, int fd);
// void    ft_putnbr_fd(int n, int fd);

// /*Part III: Bonus functions*/

// typedef struct s_list
// {
//     void            *content;
//     struct s_list   *next;
// }   t_list;

// t_list  *ft_lstnew(void *content);
// void    ft_lstadd_front(t_list **lst, t_list *new);
// int     ft_lstsize(t_list *lst);
// t_list  *ft_lstlast(t_list *lst);
// void    ft_lstadd_back(t_list **lst, t_list *new);
// void    ft_lstdelone(t_list *lst, void (*del)(void *));
// void    ft_lstclear(t_list **lst, void (*del)(void *));
// void    ft_lstiter(t_list *lst, void (*f)(void *));
// t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif