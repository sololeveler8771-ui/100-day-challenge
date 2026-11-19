//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main()
{
    char ar[] = {'a','e','i','o','u','A','E','I','O','U'};
    char s[100000];
    scanf("%s",s);
    char *p = s;
    int vc = 0,cc = 0;
    while(*p != '\0')
    {
        int c = 0;
        for(int j = 0; j<10; j++)
        {
            if(*p == ar[j])
            {
                c = 1;
                break;
            }
        }
        if(c)
        vc++;
        else
        cc++;
        p++;
    }
    printf("vowels = %d\nconsonants = %d\n",vc,cc);
}
