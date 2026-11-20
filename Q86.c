//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main()
{
    char s[100000];
    char s2[100000];
    scanf("%s",s);
    char *p = s;
    int x = 0;
    char *z = s2;
    while(*(p+x) != '\0')
    {
        x++;
    }
    x--;
    int y = x;
    while(x>=0)
    {
        s2[y-x] = *(p+x);
        x--;
    }
    int chk = 0;
    while(*p != '\0')
    {
        if(*p != *z)
        {
            chk = 1;
            break;
        }
        p++;
        z++;
    }
    if(chk)
    printf("Not Palondrome\n");
    else
    printf("Palindrome\n");
}
