//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main()
{
    char s[100000];
    scanf("%s",s);
    char *p = s;
    char *x = p;
    while(*p != '\0')
    {
        p++;
    }
    p--;
    while(p>=x)
    {
        printf("%c",*p);
        p--;
    }
    printf("\n");
}
