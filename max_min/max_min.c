#include <stdio.h>

int main() {
    //IMPORTANT: When running this program, once you have input all the values you wish, exit the program with control + d on macOS or control + z on Windows to see the output of max and min values.
    int first = 1; //declaring a variable first and initializing it to 1.
    int val, maxval, minval; //declaring variables val, maxval, and minval.

    //The while loop will read input from the standard input (keyboard) until the end of the file and will check if the input is greater than the maxval or less than the minval. Then it will update the maxval and minval accordingly.
    while(scanf("%d", &val) != EOF) {
        if( first || val > maxval ) maxval = val;
        if( first || val < minval ) minval = val;
        first = 0;
    }

    printf("Max %d\n", maxval);
    printf("Min %d\n", minval);
    
}