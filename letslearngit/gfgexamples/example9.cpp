#include<utility>
#include<iostream>
using namespace std;
int main()
{
    pair<int,int>p1(10,10);
    pair<int, string>p2("10,geeksforgeeks");
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    return 0;
}
