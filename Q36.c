//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int m,n;
    printf("Enter 2 no. : ");
    scanf("%d %d", &m, &n);
    int mn = m;
    if(mn>n)
    {
        mn = n;
    }
    int j;
    for(int i = 1; i<=mn; i += 1)
    {
        if(n%i == 0 && m%i == 0)
        {
            j = i;
        }
    }
    printf("%d\n", j);
}
