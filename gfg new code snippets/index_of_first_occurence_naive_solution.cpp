//Given a sorted array with repetition and an element x, we need to find index of first occurrence of x.//
//index of first occurrence naive solution//
#include<iostream>
using namespace std;
int first_occurrence(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={5,9,10,10,30,20,20},n=6;
    int x=20;
    cout<<first_occurrence(arr,n,x);
    return 0;
}