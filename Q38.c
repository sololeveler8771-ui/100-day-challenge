//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int sm = 0;
    for(int i = 1; i<=n; i += 1)
    {
        sm += n%10;
        n /= 10;
    }
    printf("%d\n", sm);
}
