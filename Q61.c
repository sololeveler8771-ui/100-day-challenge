//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
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
    int val;
    scanf("%d",&val);
    for(int i = 0; i<n; i++)
    {
        if(A[i] == val)
        {
            printf("Found at index %d\n",i);
            break;
        }
        if(i == n-i)
        {
            printf("-1\n");
        }
    }
}
