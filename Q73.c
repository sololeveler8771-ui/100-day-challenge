//Q73 Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n][k];
    int b[n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i<n; i++)
    {
        int sum = 0;
        for(int j = 0; j < k; j++)
        {
            sum += a[i][j];
        }
        b[i] = sum;
        printf("%d ",b[i]);
    }
    printf("\n");
}
