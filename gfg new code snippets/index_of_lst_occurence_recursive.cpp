#include<iostream>
using namespace std;
int last_occurrence(int arr[],int low,int high,int n,int x)
{
    int mid=(low+high)/2;
    if(low>high)
    return -1;
    else if(arr[mid]>x)
    return last_occurrence(arr,mid+1,high,n,x);
    else if(arr[mid]<x)
    return last_occurrence(arr,low,mid-1,n,x);
    else
    {
        if(mid==n-1||arr[mid+1]!=arr[mid])
        return mid;
        else
        low=mid+1;
    }
    return -1;
}
 int main()
 {
     int arr[]={10,20,30,10},n=4;
     int x=10;
     cout<<last_occurrence(arr,0,n-1,n,x);
     return 0;
 }