//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);
    int temp = a;
    int n = 0;
    int cnt = 0;
    while(a != 0)
    {
        n = n*10 + a%10;
        a /= 10;
        cnt++;
    }
    while(cnt != 0)
    {
        int x = n%10;
        if(x == 1)
        {
            x = 0;
        }
        else
        {
            x = 1;
        }
        printf("%d",x);
        n /= 10;
        cnt--;
    }
    printf("\n");
}
