#include<iostream>
using namespace std;
void fun1(int n)
{
    if(n==4)
    return ;
    cout<<"gfg"<<endl;
    fun1(n-1);
}
int main()
{
    fun1(10);
    return  0;
}