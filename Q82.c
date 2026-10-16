//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

int main()
{
    char s[] = {};
    scanf("%[^\n]", s);
    int i = 0;
    while(s[i] != '\0')
    {
        printf("%c\n",s[i]);
        i++;
    }
}
