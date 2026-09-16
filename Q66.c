//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

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
    int z;
    scanf("%d",&z);
    int k = n - 1;
    while(A[k] > z)
    {
        A[k+1] = A[k];
        k--;
    }
    A[k+1] = z;
    for(int i = 0; i<n+1; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
