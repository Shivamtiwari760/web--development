/*make_heap in c++ program*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={15,6,7,12,30};
    make_heap(v.begin(),v.end(),greater<int>());
    cout<<v.front()<<endl;
    pop_heap(v.begin(),v.end(),greater<int>());
    cout<<v.front()<<endl;
    v[4]=2;
    push_heap(v.begin(),v.end(),greater<int>());
    cout<<v.front()<<endl;
    return 0;
}