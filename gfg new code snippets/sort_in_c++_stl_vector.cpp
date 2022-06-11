//sort in c++ stl//
// code in array//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4};
    sort(v.begin(),v.end());
      for(int x:v)
       cout<<x<<" ";
    sort(v.begin(),v.end(),greater<int>());
    cout<<endl;
    for(int x:v)
     cout<<x<<" ";
    return 0;
}