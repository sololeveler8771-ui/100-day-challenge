Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    int j = 0;
    int b[x];
    for(int i = n-x; i<n; i++)
    {
        b[j] = a[i];
        j++;
    }
    for(int i = n-1; i>=0; i--)
    {
        if(i-x >= 0)
        a[i] = a[i-x];
    }
    for(int i = 0; i<x; i++)
    {
        a[i] = b[i];
    }
    for(int i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}
