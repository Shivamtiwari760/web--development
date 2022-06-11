//Finding factors of a number in C//
#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("\nenter the number:");
    scanf("%d",&n);
    int i,count=0;
    printf("\n the factors of %d are:",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
        printf("%d",i);
    }
}
printf("\n\ntotalfactorsof %d:%d\n",n,count);
}