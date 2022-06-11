//take two numbers as input  a and b and then print the largest number among a and b by using the selection statements
#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
     cout<<"a is greater  than b"<<" "<<a;
     else if (a==b)
     {
         cout<<"both a and b is having equal values"<<" ";
     }
     
     else
     {
         cout<<"b is greater than a"<<" "<<b;
     }
     return 0;
}