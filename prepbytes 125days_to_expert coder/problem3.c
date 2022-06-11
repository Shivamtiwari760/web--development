#include<stdio.h>
#include<conio.h>
int main()
{
    int day;
    printf("enter the day you want to find ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("the first day in the week is monday %d",day);
        break;
    case 2:
        printf("the second day in the week is tuesday %d", day);
        break;
    case 3:
        printf("the third day in the week is wednesday %d", day);
        break;
    case 4:
        printf("the fourth day in the week is thursday %d", day);
        break;
    case 5:
        printf("the fifth day in the week is friday %d", day);
        break;
    case 6:
        printf("the sixth day in the week is saturday %d", day);
        break;
    case 7:
        printf("the seventh day in the week is sunday %d", day);
        break;
    default:
    printf("invalid input is given");
        break;
    }   
}