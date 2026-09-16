//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

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
    int ps;
    scanf("%d",&ps);
    while(ps<n-1)
    {
        A[ps] = A[ps+1];
        ps++;
    }
    for(int i = 0; i<n-1; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
