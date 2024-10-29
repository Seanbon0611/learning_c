#include <stdio.h>
/* 
#include <stdio.h> is necessary because it includes the Standard Input/Output library (the stdio.h header file), 
which provides the declarations for functions that allow your program to perform basic input and output operations, 
such as reading from the keyboard or writing to the screen.
*/

int main() {
    //Prints the string "Hello, World!" to the screen
    printf("Hello, World!\n"); // \n is a newline character
    printf("Answer %d\n", 42); // %d is a format specifier that tells the printf function to expect an integer argument and the \n is a newline character
    printf("Name %s\n", "Sean"); // %s is a format specifier that tells the printf function to expect a string argument
    printf("x %.1f i %d\n", 3.5, 100); // %.f is a format specifier that tells the printf function to expect a floating-point argument with one decimal place
}

//For macOS, compile the program using the following command: clang <name_of_the_file>.c -o <executable_name>