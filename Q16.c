//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a >= b && a>= c)
    {
        printf("Largest is %d", a);
    }
    else if (b >= c)
    {
        printf("Largest is %d", b);
    }
    else
    {
        printf("Largest is %d", c);
    }
    printf("\n");
}