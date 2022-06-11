#include<iostream>
using namespace std;
enum button{bold=1,italics=3,underline=8} b;
int main()
{
    button b=bold || italics;
    cout<<b;
    return 0;
}