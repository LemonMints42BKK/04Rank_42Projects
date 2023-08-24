#include <iostream>
int main ( void ) {
    char buff[512];

    std::cout << "Hello World!" << std::endl;

    std::cout << "Enter your name: ";
    std::cin >> buff;
    std::cout << "Your name is: [" << buff << "]" << std::endl;
    return 0;
}