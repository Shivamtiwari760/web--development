// proble statement counting the days by using the switch statement
#include<iostream>
using namespace std;
int main()
{
    int day;
    cin>>day;
    switch(day)
    {
    case 1:
    cout<<"the relevant number for case 1 is sunday";
    break;
    case 2:
    cout<<"the relevant day that u re asking is tuesday";
    break;
    case 3:
    cout<<"the relevant day u re asking about is wednesday";
    break;
    case 4:
    cout<<"the relevant day you are asking about is thursday";
    break;
    case 5:
    cout<<"the relavant day you are asking about is friday";
    break;
    case 6:
    cout<<"the relvant day u are asking about is saturday";
    break;
    case 7:
    cout << "the relvant day u are asking about is sunday";
    break;
    default:
    cout<<"invalid statement and the data can not be found here";
    break;
    }
    return 0;
}