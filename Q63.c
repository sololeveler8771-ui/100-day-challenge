//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

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
    int m;
    scanf("%d",&m);
    int B[m];
    for(int i = 0; i<m; i++)
    {
        scanf("%d", &B[i]);
    }
    int z = 0;
    int C[n+m];
    for(int i = 0; i<n+m; i++)
    {
        if(i<n)
        C[i] = A[i];
        if(i>=n)
        {
            C[i] = B[z];
            z++;
        }
    }
    for(int i = 0; i<n+m; i++)
    {
        printf("%d ",C[i]);
    }
    printf("\n");
}
