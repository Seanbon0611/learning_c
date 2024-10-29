#include <stdio.h>

int main() {
    char line[1000];
    printf("Enter line\n");
    scanf("%[^\n]1000s", line); // read until newline or 1000 characters
    //alternatively, you can use fgets(line, sizeof(line), stdin);
    // fgets(line, 10000, stdin);
    printf("You entered: %s\n", line);
}