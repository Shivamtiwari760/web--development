#include<stdio.h>
#include<math.h>
int main()
{
    int no,rev;
    printf("enter the number:");
    scanf("%d",&no);
    while(no!=0)
    {
        rev=rev*10;
        rev=rev+(no%10);
        no=no/10;
    }
    printf("rev of number:%d\n",rev);
    return 0;
}
