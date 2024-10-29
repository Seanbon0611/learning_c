#include <stdio.h>

int main() {
    int usf, euf;
    printf("Enter US floor\n");

    //scanf is a function that reads input from the standard input (keyboard) and stores it in the specified variable.
    scanf("%d", &usf); //& is the address-of operator, which is used to get the address of a variable in memory.
    euf = usf - 1; //
    printf("European floor %d\n", euf);
}