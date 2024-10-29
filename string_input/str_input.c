#include <stdio.h>

int main() {
    //In C, a string is an array of characters which the size of the array must be defined.
    char name[100]; //declaring a string with the size of 100 characters. 

    printf("Enter name:\n");
    //The 100 in the scanf function is the maximum number of characters that can be read from the input.
    //so if the user enters more than 100 characters, the extra characters will be ignored.
    scanf("%100s", name); //taking input from user.
    printf("Hello: %s\n", name); //printing the input.
}