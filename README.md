Project: C - printf

Project Description

The project consists of writing a custom implementation of the printf function in C, called _printf. This function mimics the behavior of the standard printf but supports a limited set of format specifiers. The task was to create a function capable of handling format specifiers such as %c, %s, %d, %i, and %, using function pointers to handle each specifier.

The _printf function reads a format string and processes it, printing the corresponding output for each valid specifier. It makes use of variable arguments through the stdarg.h library to process input and print the desired characters or values to the standard output.

Function Overview

_printf Function

The _printf function is the main function responsible for outputting the formatted string. It takes in a format string and a variable number of arguments. The function uses a loop to iterate over the characters of the format string and checks for the % character, indicating a format specifier. For each valid specifier, the corresponding function is called via function pointers. The function keeps track of the number of characters printed and returns this value at the end.
Format Specifiers

The following format specifiers are supported:

```
    %c – Print a single character.
    %s – Print a string.
    %% – Print the percent sign.
    %d – Print an integer as a decimal.
    %i – Print an integer in base 10.
```
Each of these specifiers is associated with a specific function, which is invoked using a function pointer defined in a structure. The structure holds the specifier character and the function to be called for that specifier.
Compilation Command
To compile the project, use the following command:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
This command will compile all the .c files in the project directory, ensuring that the code adheres to strict C standards and prevents common errors.
Requirements
To run this project, the following environment is required:
    Operating System: Ubuntu 20.04 LTS (or a similar Linux distribution)
    Compiler: GCC (GNU Compiler Collection), version 8 or higher
    Libraries: stdarg.h for handling variable arguments
    Git: For version control and repository management
Additionally, ensure that you have access to a terminal and the necessary permissions to compile and execute code.
Usage Examples
Here are some examples of using the _printf function, followed by the expected output on the standard output.
Example 1: Print a simple string
```c
int len = _printf("Hello, world!\n");
printf("Length: %d\n", len);
```
Output:
```c
Hello, world!
Length: 14
```
Example 2: Print an integer
```c
int len = _printf("The number is: %d\n", 42);
printf("Length: %d\n", len);
```
Output:
```c
The number is: 42
Length: 21
```
Example 3: Print a string with a character
```c
int len = _printf("Character: %c, String: %s\n", 'A', "Test");
printf("Length: %d\n", len);
```
Output:
```c
Character: A, String: Test
Length: 20
```
Example 4: Print percentage sign
```c
int len = _printf("This is a percent: %%\n");
printf("Length: %d\n", len);
```
Output:
```c
This is a percent: %
Length: 23
```
Man Page
Here is a basic man page describing how to use _printf:
NAME
_printf - outputs formatted text to the standard output
SYNOPSIS
```c
int _printf(const char *format, ...);
```
DESCRIPTION
The _printf function sends formatted output to stdout. It processes the format string and uses the corresponding functions for each specifier to output the correct content. It supports the following specifiers:
```c
    %c – print a single character.
    %s – print a string.
    %% – print a literal percent symbol.
    %d – print an integer in base 10.
    %i – print an integer in base 10.
```
RETURN VALUE
The function returns the total number of characters printed, excluding the null byte used to end output to strings.
EXAMPLES
```c
_printf("Hello, world!\n");
_printf("Integer: %d\n", 42);
_printf("Character: %c, String: %s\n", 'A', "Test");
_printf("Percentage sign: %%\n");
```
Testing
To test the _printf function, we used various cases to check for correct functionality. We tested:
    Different specifiers (%c, %s, %d, %i, %%).
    Handling edge cases such as zero-length strings and large numbers.
    Comparing the output with the standard printf to ensure consistency.
Additionally, we ran tests using Valgrind to check for memory leaks and errors in the code:
```
valgrind --leak-check=full ./printf
```
Valgrind reports were clean, meaning no memory leaks were found.
Example Testing Code
```c
int len = _printf("Hello, %s! The answer is %d.\n", "World", 42);
```
Expected Output:
```c
Hello, World! The answer is 42.
```
Flowchart
Here is a flowchart depicting the structure of the _printf function:
https://drive.google.com/file/d/16ALs7wof_uIHiOAzGPEqnSzPlkoPLl0b/view?usp=sharing

Acknowledgements

    Gabriel Bescond (author of the README)
    Killian Lemoine (author of the man page)
    Arthur and Mathieu (helped with the function design)
    Brahim Haddad (collaborated on the development of additional functions)

Challenges

The main difficulty encountered during the development of the project was related to indentation and ensuring proper formatting of code blocks. This was especially challenging in sections where nested loops and conditional checks were used to handle the format string and the variable arguments.