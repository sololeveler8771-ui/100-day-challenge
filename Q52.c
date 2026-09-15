/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main()
{
    int j = 0;
    for (int i = 1; i <= 5; (j == 0) ? (i += 2) : (i -= 2))
    {
        printf("\n");
        for(int j = 1; j<=i; j+=1)
        {
            printf("*\n");
        }
        if(i == 5)
        {
            j = 1;
        }
        if(j==1 && i==1)
        {
            break;
        }
    }
}
