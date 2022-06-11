//sort in c++ stl//
// code in array//
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
     for(int x:arr)
      cout<<x<<" ";
    sort(arr,arr+n,greater<int>());
    cout <<endl;
    for(int x:arr)
     cout<<x<<" ";
    return 0;
}
