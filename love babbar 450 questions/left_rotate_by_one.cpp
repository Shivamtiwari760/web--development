// c++ program of an array of left rotation by one//
#include<bits/stdc++.h>
using namespace std;
//function of left rotate by one//
void leftrotateone(int arr[], int n){
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
//driver code//
int main(){
    int arr[]={1,2,3,4,5},n=5;
    cout<<"before left roration by one"<<endl;
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    leftrotateone(arr,n);
    cout<<"after left rotation by one"<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    return 0;
}