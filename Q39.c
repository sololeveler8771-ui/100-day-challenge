Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int prod = 1;
    while(n!=0)
    {
        int z = n%10;
        if(z%2 != 0)
        {
            prod *= z;
        }
        n /= 10;
    }
    printf("%d\n",prod);
}
