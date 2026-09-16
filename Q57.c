//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    int sm = 0;
    for(int i = 0; i<n; i++)
    {
        sm += A[i];
    }
    printf("%d\n",sm);
}
