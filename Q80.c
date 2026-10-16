//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main(void)
{
    int n, k, x, y;
    scanf("%d %d", &n, &k);

    int a[n][k];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &x, &y);
    if (x != k)
    {
        printf("Invalid matrix dimensions\n");
        return 1;
    }

    int b[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int c[n][y];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            int sm = 0;
            for (int t = 0; t < k; t++)
            {
                sm += a[i][t] * b[t][j];
            }
            c[i][j] = sm;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
