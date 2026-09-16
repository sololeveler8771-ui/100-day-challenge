//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int N[10];
    for(int i = 0; i<10; i++)
    {
        N[i] = 0;
    }
    while(n!=0)
    {
        int a = n%10;
        n /= 10;
        for(int i = 0; i<10; i++)
        {
            if(i == a)
            {
                N[i]++;
            }
        }
    }
    int max = 0;
    int num = 0;
    for(int i = 0; i<10; i++)
    {
        if(N[i] > max)
        {
            max = N[i];
            num = i;
        }
    }
    printf("%d\n",num);
}
