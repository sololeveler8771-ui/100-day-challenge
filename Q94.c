//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], longest[1000] = "";
    int maxLen = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    char *word = strtok(s, " ");
    while (word != NULL) {
        int len = strlen(word);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("%s\n", longest);
    return 0;
}
