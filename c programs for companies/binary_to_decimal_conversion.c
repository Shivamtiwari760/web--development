#include<stdio.h>
#include<conio.h>
void main()
{
    int num,binary,decimal=0,base=1,rem;
    printf("enter a binary number\n");
    scanf("%d",&num);
    binary=num;
    while(num>0)
    {
        rem=num%10;
        decimal=decimal+rem*base;
        num=num/10;
        base=base*2;
    }
    printf("decimal number:%d\n",decimal);
}