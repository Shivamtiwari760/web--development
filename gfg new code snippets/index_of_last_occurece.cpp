//Given a sorted array with repetition and an element x, we need to find index of last occurrence of x.//
// iterative solution to find the index of last occurrence//
#include<iostream>
using namespace std;
int last_occurrence(int arr[],int n,int x)
{
    int low=0,high=n-1;
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
        {
            low=mid+1;
        }
        else if(arr[mid]<x)
        {
            high=mid-1;
        }
        else
        {
            if(mid==n-1||arr[mid+1]!=arr[mid])
            return mid;
            else
            low=mid+1;
        }

    }
    return -1;
}
int main()
{
    int arr[]={10,20,30,40,10},n=5;
    int x=10;
    cout<<last_occurrence(arr,n,x);
    return 0;
}