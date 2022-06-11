#include<iostream>
using namespace std;
void fun()
{
    cout<<"gfg";
}
int main()
{
    void(*fun_ptr)()=&fun;
   (*fun_ptr)();//this is the another way of calling the function we can also use the auto here and then fun_ptr=fun  and then we can declare it as fun
    return 0;
} 
