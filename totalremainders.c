#include<stdio.h>

int main()
{
    int x,y,total;

    printf("Enter Number 1 : ");
    scanf("%d",&x);
    printf("Enter Number 2 : ");
    scanf("%d",&y);

    total = x + y;
    printf("\nTotal : %d\n\n",total);

    if (total%4==0)
    {
        printf("Total can be devided by 4.\nNot remainders");
    }
    else
    {
        printf("Total can not be devided by 4.");   
    }
    



    return 0;
}