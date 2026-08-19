//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int y, c;
    printf("Enter the year : ");
    c = 1;
    scanf("%d", &y);
    if(y%4 == 0)
    {
        c = 0;
        if(y%100 == 0)
        {
            c = 1;
            if(y%400 == 0)
            {
                c = 0;
            }
        }
    }
    if(c)
    {
        printf("Not a leap year\n");
    }
    else{
        printf("Leap year\n");
    }
}