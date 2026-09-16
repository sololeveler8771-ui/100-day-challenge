//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    int ng,ps,zr;
    ng = ps = zr = 0;
    for(int i = 0; i<n; i++)
    {
        if(A[i]>0)
        {
            ps++;
        }
        else if(A[i]<0)
        {
            ng++;
        }
        else
        {
            zr++;
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n",ps,ng,zr);
}
