//Given an integer, we need to find floor of its square root. This video talks about two methods.//
//finding square root of a function by using the naive solution//
#include<iostream>
using namespace std;
int square_root_Floor(int x)
{
    int i=1;
    while(i*i<=x)
     i++;
    return i-1;

}
int main()
{
 cout<<square_root_Floor(37);
 return 0;
}