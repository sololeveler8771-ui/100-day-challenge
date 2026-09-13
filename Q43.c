//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sm = 0;
    int tmp = n;
    while (tmp != 0)
    {
        int n = tmp % 10;
        int fac = n;
        for(int i = 2; i<n; i++)
        {
            fac *= i;
        }
        sm += fac;
        tmp /= 10;
    }
    if(sm == n)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not Strong number\n");
    }
}
