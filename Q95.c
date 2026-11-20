//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], b[1000], temp[2000];

    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    if (strlen(a) != strlen(b)) {
        printf("Not rotation\n");
        return 0;
    }

    strcpy(temp, a);
    strcat(temp, a);

    if (strstr(temp, b) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
