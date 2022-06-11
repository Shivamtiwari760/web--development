//Given an infinite sized array, we need to write an efficient solution to search an element. In this video, we have discussed two solutions.//
//search in an infinite sized array efficeint  solution//
#include<iostream>
using namespace std;
int binary_search(int arr[],int low,int high,int x)
{
    if(low>high)
     return -1;
    int mid=(low+high)/2;
    if(arr[mid]==x)
     return mid;
    else if(arr[mid]>x)
     return binary_search(arr,low,mid-1,x);
    else
     return binary_search(arr,mid+1,high,x);
    
}
int search(int arr[],int x)
{
    if(arr[0]==x)
     return 0;
    int i=1;
    while(arr[i]<x)
        i=i*2;
    if(arr[i]==x)
        return i;
    return binary_search(arr,i/2+1,i-1,x);
}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,120,290,800};
    int x=6;
    cout<<search(arr,x);
    return 0;
}