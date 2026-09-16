//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

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
    for(int i = 0; i<n/2; i++)
    {
        A[i] = A[i] + A[n-i-1];
        A[n-i-1] = A[i] - A[n-i-1];
        A[i] = A[i] - A[n-i-1];
    }
    for(int i = 0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
