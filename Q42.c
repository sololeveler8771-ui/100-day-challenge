//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sm = 0;
    for(int i = 1; i<n; i++)
    {
        if(n%i == 0)
        {
            sm += i;
        }
    }
    if(sm == n)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not Perfect number\n");
    }
}
