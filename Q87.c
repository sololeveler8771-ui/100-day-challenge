//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];
    int spaces = 0, digits = 0, special = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ')
            spaces++;
        else if (isdigit((unsigned char)s[i]))
            digits++;
        else if (!isalpha((unsigned char)s[i]))
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
