//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n+1];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    int ps, vl;
    scanf("%d %d",&ps,&vl);
    int k = n;
    while(k > ps)
    {
        A[k] = A[k-1];
        k--;
    }
    A[ps] = vl;
    for(int i = 0; i<n+1; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
