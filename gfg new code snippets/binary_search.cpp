// iterative binary search//
#include<iostream>
using namespace std;
int Binary_search(int arr[], int n, int x)
{
    int low=0, high=n-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
            low=mid+1;
    }
        return -1;
}
int main()
{
    int arr[]={23,27,30,40,40}, n=5;
    int x=30;
    cout<<Binary_search(arr,n,x);
    return 0;
}