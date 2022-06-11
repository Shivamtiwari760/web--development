#include<iostream>
using namespace std;
int count_digits(int x)
{
    int res;
    while(x>0)
    {
        x=x/10;
        res++;
    }
    return res;
}

 int main(void)
{
    int x = 345;
    cout << "Number of digits : " << count_digits(x);
    return 0;
}