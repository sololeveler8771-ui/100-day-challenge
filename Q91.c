//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];
    int j = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower((unsigned char)s[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            s[j++] = s[i];
    }
