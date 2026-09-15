/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345

Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include <stdio.h>
#include <math.h>

int main()
{
    for(int i = 1; i<=5; i++)
    {
        for(int j = i; j>=1; j--)
        {
            printf("%d",6-j);
        }
        printf("\n");
    }
}
