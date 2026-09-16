//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

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
    int z;
    scanf("%d",&z);
    int i = 0;
    while(1)
    {
        if(A[(i+n)/2 + 1] == z)
        {
            i = (i+n)/2 + 1;
            printf("Found at index %d\n", i);
            break;
        }
        else if(A[(i+n)/2 + 1] > z)
        {
            n = (i+n)/2 + 1;
        }
        else
        {
            i = (i+n)/2 + 1;
        }
        if(i >= n-1)
        {
            printf("-1\n");
            break;
        }
    }
}
