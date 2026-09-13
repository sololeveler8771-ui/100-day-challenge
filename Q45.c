//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    scanf("%f", &n);
    float sm = 0;
    for(float i = 1; i<=n; i++)
    {
        sm += (2*i)/(4*i - 1);
    }
    printf("Approximate sum: %.1f\n", sm);
}
