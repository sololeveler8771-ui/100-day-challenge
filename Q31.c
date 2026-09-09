//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main()
{
    int n;
    int p = 0;
    printf("Enter a no. : ");
    scanf("%d", &n);
    for(int i = 1; n!= 0; i *= 10)
    {
        int j = (n%2)*i;
        p = p + j;
        n /= 2;
    }
    printf("%d \n", p);
}
