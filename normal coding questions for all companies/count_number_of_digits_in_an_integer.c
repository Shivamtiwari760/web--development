//program to count number of  digits in an integer//
#include<stdio.h>
#include<conio.h>
int main(){
    int count=0,n;
    printf("\n enter the number:");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count ++;
    }
    printf("\nnumber of digits in an integer is:%d\n",count);
}