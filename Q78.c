//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n][k];
    int b[n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            scanf("%d", &a[i][j]);
        }
        b[i] = a[i][i];
    }
    int c = 0;
    for(int i = 0; i<n; i++)
    {
        c += b[i];
    }
    printf("%d\n",c);
}
