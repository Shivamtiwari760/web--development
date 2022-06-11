// c++ program to insert an element in an array//
#include<bits/stdc++.h>
using namespace std;
//fuction to insert an element in an array//
int insert(int arr[], int n,int x, int cap,int pos){
    if(n==cap)
    return n;
    int idx=pos-1;

    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    return n+1;
}
//driver code//
int main(){
    int arr[]={1,2,3,4,5},cap=6,n=3;
    cout<<"before insertion "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    int x=7, pos=2;
    n=insert(arr,n,x,cap,pos);
    cout<<"after insertion"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}