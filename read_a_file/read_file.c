#include <stdio.h>

int main() {
    char line[1000];

    FILE *hand; // FILE is a data type defined in the stdio.h header file. It is used to represent a file stream in C. In this case, hand is a pointer to a FILE object.
    hand = fopen("romeo.txt", "r"); // fopen is a function that opens a file. The first argument is the name of the file, and the second argument is the mode in which the file is opened. "r" stands for read mode.
    //The while loop will refer to the file stream(in this case, romeo.txt) and read each line until the end of the file. The maximum number of characters that can be read is 1000.
    while( fgets(line, 1000, hand) != NULL ) {
        printf("%s", line);
    }
}