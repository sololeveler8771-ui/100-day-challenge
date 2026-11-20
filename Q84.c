//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main()
{
    char s[100000];
    scanf("%s",s);
    char *p = s;
    while(*p != '\0')
    {
        printf("%c",*p-32);
        p++;
    }
    printf("\n");
}
