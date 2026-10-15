//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int c = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            if(a[i][j] != a[j][i])
            {
                c = 1;
            }
        }
    }
    if(c)
    printf("Not Symmetric\n");
    else
    printf("Symmetric\n");
}
