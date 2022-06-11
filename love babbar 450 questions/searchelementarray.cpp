//Search an Element in an array//
#include<bits/stdc++.h>
using namespace std;
//function to search for element in an array//
    int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x)
          return i;
    }
    return -1;
    }
    int main(){
        int arr[]={20,9,7,25},x=5;
        cout<<"searched index= "<<search(arr,4,x)<<endl;
        return 0;
    }
    