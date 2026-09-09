//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int p = 0;
    printf("Enter a no. : ");
    scanf("%d", &n);
    for(int i = 2; pow(i,2)+1<=n; i += 1)
    {
        if(n%i == 0)
        {
            p = 1;
        }
    }
    if(!p)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
}
