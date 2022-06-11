#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("\nenter the two numbers so that they can be compared");
    printf("\nenter the value of a ");
    scanf("%d",&a);
    printf("\n enter the value of b ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("the number  a is greater than the b is %d",a);
    }
    else if(b>a)
    {
        printf("the number b is greater than a is %d",b);
    }
    else
    {
        printf("both numbers are equal here");
    }
 return 0;   
}