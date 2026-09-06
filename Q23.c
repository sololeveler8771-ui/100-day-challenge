/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>

int main()
{
    int n;
    int chrg;
    printf("Enter the no. of days late : ");
    scanf("%d", &n);
    if(n>30)
    {
        printf("Membership Cancelled\n");
    }
    else
    {
        if(n<=5)
        {
            chrg = n*2;
        }
        else if(n<=10)
        {
            chrg = 10 + (n-5)*4;
        }
        else
        {
            chrg = 10 + 20 + (n - 10)*6;
        }
        printf("Fine ₹%d\n", chrg);
    }
}