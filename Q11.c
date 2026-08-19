//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int c = n%2;
    if(c)
    {
        printf("%d is odd\n", n);
    }
    else
    {
        printf("%d is even", n);
    }
}