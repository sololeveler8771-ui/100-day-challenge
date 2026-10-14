//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n][k];
    int b[k][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for(int i = 0; i<k; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
