//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n][k];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d",&n,&k);
    int b[n][k];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int c[n][k];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
