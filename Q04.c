//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>

int main() 
{
    int r;
    printf("enter length - ");
    scanf("%d", &r);

    double ccfn = 2 * r * 3.141;
    double ar = r * r * 3.14159;
    printf("area = %.2f ,circummference  = %.2f", ar , ccfn);
}
