//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char *words[100];
    int n = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    char *word = strtok(s, " ");
    while (word != NULL) {
        words[n++] = word;
        word = strtok(NULL, " ");
    }

    for (int i = 0; i < n - 1; i++)
        printf("%c.", words[i][0]);

    if (n > 0) {
        if (n > 1)
            printf(" ");
        printf("%s", words[n - 1]);
    }
    printf("\n");

    return 0;
}
