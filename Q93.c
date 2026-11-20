//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char a[1000], b[1000];
    int count[256] = {0};
    int anagram = 1;

    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    if (strlen(a) != strlen(b)) {
        printf("Not anagrams\n");
        return 0;
    }

    for (int i = 0; a[i] != '\0'; i++) {
        count[(unsigned char)tolower((unsigned char)a[i])]++;
        count[(unsigned char)tolower((unsigned char)b[i])]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            anagram = 0;
            break;
        }
    }
