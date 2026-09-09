//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

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
    int lcm = m*n/j;
    printf("%d\n", lcm);
}
