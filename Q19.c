//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the length of the 3 sides of triangle :\n");
    scanf("%d %d %d",a,b,c);
    int c = 0;
    if(a == b)
    {
        c++;
    }
    if(b == c)
    {
        c++;
    }
    if(a == c)
    {
        c++;
    }
    if(c == 0)
    {
        printf("Scalene");
    }
    else if(c == 1)
    {
        printf("Isoceles");
    }
    else
    {
        printf("Equilateral");
    }
    printf("\n");
}