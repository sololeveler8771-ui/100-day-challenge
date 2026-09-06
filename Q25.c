/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main()
{
    int m,n;
    char s;
    printf("Enter 2 no. and the operetion among +, -, *, /, %% :\n");
    scanf("%d %d %c", &m,&n,&s);
    int res;
    switch (s)
    {
    case '+':
        res = m+n;
        break;
    case '-':
        res = m-n;
        break;
    case '*':
        res = m*n;
        break;
    case '/':
        res = m/n;
        break;
    case '%':
        res = m%n;
        break;
    default:
        break;
    }
    printf("%d\n", res);
}