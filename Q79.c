//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>                       
int main()
{
    int n,k;
    scanf("%d %d",&n, &k);
    int a[n][k];
    for(int x = 0; x<n; x++)
    {
        for(int y = 0; y<k; y++)
        {
            scanf("%d", &a[x][y]);
        }
    }
    int i,j;
    i = j = 0;
    int c = 1;
    do
    {
        printf("%d ",a[i][j]);
        if(i == 0 && j == 0)
        {
            j++;
        }
        else
        {
            if(c ==1)
            {   if(j!=0)
                {
                    if(i!=n-1)
                    {
                        i++;
                        j--;
                    }
                    else
                    {
                        j++;
                        c = 0;
                    }
                }
                else
                {
                    if(i != n-1)
                    i++;
                    else
                    j++;
                    c = 0;
                }
            }
            else
            {
                if(i!=0)
                {
                    if(j != k-1)
                    {
                        j++;
                        i--;
                    }
                    else
                    {
                        i++;
                        c = 1;
                    }
                }
                else
                {
                    if(j != k-1)
                    j++;
                    else
                    i++;
                    c = 1;
                }
            }
        }
    }
    while(i<n && j <k);
}
