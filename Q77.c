//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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
        int x = b[i];
        for(int j = 0; j<n; j++)
        {
            if(j != i && b[i] == b[j])
            c = 1; 
        }
    }
    if(c)
    printf("False\n");
    else
    printf("True\n");
}
