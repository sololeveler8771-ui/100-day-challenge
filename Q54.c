/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main()
{
    int j = 0;
    int x = 4;
    for (int i = 1; i <= 9; (j == 0) ? (i += 2) : (i -= 2))
    {
        for(int j = 1; j<=x; j++)
        {
            printf(" ");
        }
        for(int j = 1; j<=i; j+=1)
        {
            printf("*");
        }
        if(i == 7)
        {
            j = 1;
        }
        if(j==1 && i==1)
        {
            break;
        }
        (j == 1)?(x+=1):(x-=1);
        printf("\n");
    }
}
