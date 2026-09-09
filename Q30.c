//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main()
{
    int n;
    int p = 0;
    printf("Enter a no. : ");
    scanf("%d", &n);
    for(int i = 2; n!= 0; i += 1)
    {
        p = p*10 + n%10;
        n /= 10;
    }
    printf("%d \n", p);
}
