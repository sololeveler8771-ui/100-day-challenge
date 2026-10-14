//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    int j = 0, k = 0;
    int x = 0;
    for(int i = 0; k == 0 || i<n; i++)
    {
        if(a[i] > max && i != x)
        {
            max = a[i];
            j = i;
        }
        if(i == n-1 && k == 0)
        {
            k = 1;
            i = -1;
            x = j;
            max = 0;
        }
    }
    printf("%d\n",max);
}
