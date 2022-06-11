//https://www.codechef.com/problems/EOEO
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  while(t--)
  {
     long long int TS;
     cin>>TS;
     while(TS%2!=1)
     {
         TS=TS/2;
     }
     cout<<(TS-1)/2<<"\n";
     return 0;
  }
}
