//c++ program to reverse of an array//
#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[], int n)
{
    int low=0,high=n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5},n=5;
    cout<<"before reverse"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reversearray(arr,n);
    cout<<"after reverse"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}