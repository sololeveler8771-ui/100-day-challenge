//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int zf , zl;
    zl = n%10;
    int temp = n/10;
    int rst = 0;
    int i = 0;
    while(temp != 0)
    {
        if(temp/10 == 0)
        {
            zf = temp;
        }
        else
        {
            rst = rst + pow(10,i)*(temp%10);
        }
        temp /= 10;
        i++;
    }
    temp = pow(10,i)*zl + rst *10 + zf;
    printf("%d\n", temp);
}
