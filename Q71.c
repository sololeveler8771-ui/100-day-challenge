//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

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
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}
