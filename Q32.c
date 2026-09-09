//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main()
{
    int n;
    int p = 0;
    printf("Enter a no. : ");
    scanf("%d", &n);
    int chk = n;
    for(int i = 1; n!= 0; i *= 10)
    {
        p = p*10 + n%10;
        n /= 10;
    }
    if(p == chk)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
}
