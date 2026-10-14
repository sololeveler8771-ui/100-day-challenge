//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

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
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            sum += a[i][j];
        }
    }
    printf("%d\n", sum);
}
