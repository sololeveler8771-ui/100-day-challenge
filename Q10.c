//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int s;
    printf("Enter the time in seconds : ");
    scanf("%d", &s);
    int h = s/3600;
    int temp = s % 3600;
    int m = temp/60;
    s = temp % 60;
    printf("%d:%d:%d\n", h,m,s);
}