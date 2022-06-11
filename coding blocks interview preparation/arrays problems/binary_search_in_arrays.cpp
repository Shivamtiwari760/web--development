#include<iostream>
using namespace std;
//binary search
// effiecinet way to search in sorted arrays
int Binary_search(int a[],int n,int key)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
        return -1;
}
    int main()
    {
    int key;
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // ask for the element you want to search
    cout<<"enter the element you want to search:";
    cin>>key;
    cout<<Binary_search(a,n,key)<<endl;
    return 0;
    }