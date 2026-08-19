//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>

int main() 
{
    int p, r, t;
    printf("enter principle : ");
    scanf("%d", &p);
    printf("enter rate : ");
    scanf("%d", &r);
    printf("enter  time : ");
    scanf("%d", &t);
    float s = (p*r*t)/100.00;
    float c = pow(((100 + r)/100.00), t)*p - p;
    printf("Simple Interest = %.2f, Compound Interest = %.2f", s, c);
}
