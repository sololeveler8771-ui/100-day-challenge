//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    char *word = strtok(s, " ");
    while (word != NULL) {
        printf("%c.", word[0]);
        word = strtok(NULL, " ");
    }
    printf("\n");

    return 0;
}
