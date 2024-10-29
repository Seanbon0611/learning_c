#include <stdio.h>

int main() {
    char line[1000];
    printf("Enter line\n");
    scanf("%[^\n]1000s", line); // read until newline or 1000 characters
    printf("You entered: %s\n", line);
}