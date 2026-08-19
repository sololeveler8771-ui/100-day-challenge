//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    char x;
    printf("Enter a character : ");
    scanf("%c", &x);
    int j = x;
    if(j > 64 && j < 91)
    {
        printf("Uppercase Alphabet");
    }
    else if(j > 96 && j < 123)
    {
        printf("Lowercase Alphabet");
    }
    else if(j > 47 && j < 58)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    printf("\n");
}