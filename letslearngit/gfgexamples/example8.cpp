#include<iostream>
using namespace std;
Class SP{
    int *ptr;
    public:
    SP(int*p=null){ptr=p;}
    ~SP(){delete ptr;}
    int &operator*(){return *ptr;}
};
int main()
{
    SP sp(new int());
    *sp=20;
    cout<<*sp;
    return 0;
}
