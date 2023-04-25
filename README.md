#ALX printf Project

This project is part of the ALX software engineering program. The goal of this project is to implement a simplified version of the standard C library printf function, which allows formatted printing of text to the standard output.

#Project Overview
The printf function takes a format string and a variable number of arguments, and prints the formatted text to the standard output. The format string can contain format specifiers, which start with the % character, and specify how each argument should be formatted and printed.

In this project, we will be implementing a simplified version of printf, which supports the following format specifiers:

%c - print a single character
%s - print a null-terminated string
%d - print a signed decimal integer
%i - print a signed decimal integer (same as %d)
%u - print an unsigned decimal integer
%x - print an unsigned hexadecimal integer (lowercase)
%X - print an unsigned hexadecimal integer (uppercase)
%% - print a literal % character
%r - print a reversed string
%R - print a string in rot13

#Project Requirements

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called main.h
Don’t forget to push your header file
All your header files should be include guarded

#Authorized functions and macros

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

#Getting Started

To get started with this project, you should clone the project repository from GitHub:

$ git clone https://github.com/0xk1/printf.git

Once you have cloned the repository, you can begin implementing the required functions in the printf.c file. You can test your implementation using the provided main.c file, which contains some basic test cases.

To compile and run the test cases, you can use the following commands:

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf
./printf

#Contributions

This project is open to contributions from the ALX community. If you find a bug, or have a suggestion for an improvement, please create an issue on GitHub or submit a pull request with your changes.


