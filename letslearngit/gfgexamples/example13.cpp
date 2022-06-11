#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={10,20,30};
    reverse(v.begin(),v.end());
    for(int x:v)
    cout<<x<<" ";
    return 0;
}