//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], c;
    int count = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    scanf(" %c", &c);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
