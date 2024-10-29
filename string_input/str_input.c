#include <stdio.h>

int main() {
    //In C, a string is an array of characters which the size of the array must be defined.
    char name[100]; //declaring a string with the size of 100 characters. 

    printf("Enter name:\n");
    scanf("%100s", name); //taking input from user.

    printf("Hello: %s\n", name); //printing the input.
}