//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    char ah;
    printf("Enter a letter : ");
    scanf("%c", &ah);
    if(ah == 'a' || ah == 'e' || ah == 'i' || ah == 'o' || ah == 'u' || ah == 'A' || ah == 'E' || ah == 'I' || ah == 'O' || ah == 'U')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
}