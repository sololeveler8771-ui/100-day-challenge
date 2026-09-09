//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int p = 0;
    printf("Enter a no. : ");
    scanf("%d", &n);
    for(int i = 1; pow(10,i)<=n; i += 1)
    {
        p = i+1;
    }
    int sum = 0;
    int chk = n;
    for(int i = 1; i <= p; i++)
    {
        sum += pow((n%10),p);
        n /= 10;
    }
    if(sum == chk)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
}
