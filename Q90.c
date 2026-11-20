//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper((unsigned char)s[i]))
            s[i] = tolower((unsigned char)s[i]);
        else if (islower((unsigned char)s[i]))
            s[i] = toupper((unsigned char)s[i]);
    }

    printf("%s\n", s);
    return 0;
}
