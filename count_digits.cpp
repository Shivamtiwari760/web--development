// program to count digits in a number i  c++//
#include<iostream>
using namespace std;
int main()
{
  cin>>x;
  cout<<res;
}
int count_digits(int x)
{
    int res=0;
    while(x>0)
    {
        x=x/10;
        res++;
    }
    return res;
}
