//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main()
{
    char s[100] = {};
    scanf("%99[^\n]", s);
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    printf("%d\n",i);
}
