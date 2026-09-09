//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

int main()
{
    int n;
    int p = 1;
    printf("Enter a no. : ");
    scanf("%d", &n);
    for(int i = 2; i<=n; i += 1)
    {
        p *= i;
    }
    printf("%d \n", p);
}
