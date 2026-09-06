//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3pro:
No Profit No Loss

*/
#include <stdio.h>

int main()
{
    int cp, sp;
    printf("Enter Cost price and Selling price :\n");
    scanf("%d %d", &cp, &sp);
    int diff = (sp - cp);
    int plp;
    if(diff < 0)
    {
        diff = -diff;
        plp = (diff*100)/cp;
        printf("Loss %d%%",plp);
    }
    else if(diff > 0)
    {

        plp = (diff*100)/cp;
        printf("Profit %d%%",plp);
    }
    else
    {
        printf("No Profit no Loss");
    }
    printf("\n");
}
