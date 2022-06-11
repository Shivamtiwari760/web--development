#include<iostream>
using namespace std;
void fun1()
{
    cout<<"fun1\n";
}
void fun2(){
        cout<<"before fun1\n";
        fun1();
        cout<<"after fun1\n";
}
int main(){
    cout<<"before fun2\n";
    fun2();
    cout<<"after fun2\n";
    return 0;
}