//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int a, b, c;
    printf("Enter a, b and c:\n");
    scanf("%d %d %d", &a, &b, &c);
    int D = b*b - 4*a*c;
    if(D<0)
    {
        printf("Roots are complex");
    }
    else if(D == 0)
    {
        float f = -b/(2*a);
        printf("Roots are real and same : %.2ff", f);
    }
    else
    {
        float f = (-b - pow(D, 1/2))/(2*a);
        float g = (-b + pow(D, 1/2))/(2*a);
        printf("Roots are real and different : %.2f, %.2f", f, g);
    }
    printf("\n");
}