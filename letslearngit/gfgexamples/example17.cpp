/* finding nth term in arithmetic progression*/
#include<iostream>
using namespace std;
/*ios_base::sync_with_stdio(false);
cin.tie(null);*/
int main()
{
    int a,n,d,t;
    cin>>t;
    while(t--){
        cin>>a>>n>>d;
        cout<<a+(n-1)*d<<" "<<"\n";
    }
    return 0;
}/* for the beginner student who does not know programming well then there is an inefficient solution would cause the time limit exceded problem*/
/*
#include<iostream>
using namespace std;
int getnthterm(inta ,int n,int d){
int res=0;
for(int =0;i<n;i++)
res=res+d;
return res;
}
int main()
{
    int a,n,d,t;
    cin>>t;
    while(t--){
        cin>>a>>n>>d;
        cout<<getntheterm(a,n,d)<<"\n";

    }
    return 0;
} 
*/
/* prefer to use "\n" over endl for new line because the \n is more faster than endl and cp is all about faster running of a  program
ex: cout<<"geeksforgeeks"<<"\n"
<<"courses";
becasue \n is not casue any flush operaton but the endl would cause the flush operation*/
/* use the header file to include all the standard libraries (g++ secific)
#include<bits/stdc++.h>, if u wont usse that then for indiviual containers u have to again type like map and #inlude<vector> and #include<string> and all bu by using the #include<bits/stdc++.h> it will include all the files for u you no need to add anything extra in that*/
/* structure of a typical c++ comptetive programming code is here
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(null);
    int t;
    for(int i=0;i<t;i++){
        //read input for a test case
        //impliment logic
        //write output for the test case
    }
    return 0;
}*/
/* using typedef and macros in c++*/
/*  c++ has a special function that is string str;
getline(cin,str); for ingoring the spaces between sring it wont be finish until you press enter*/
/* some c++ specific tricks  that we can sue to save our time typedef and macro which ehlp you in saving your time
these are some typedef specific shortcuts thatmany of the competetive programmers use what typedef would do it creates another name for datatype like shortcut instead of using the long long  we can use the ll;
/* typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef vector<pii> vpii;*/
/* macros and typedef are both c features mainly, c++ inherits from c, but in cp we use the macros to save our time
#define REP(i,x,y) for(int i=x;i<y;i++)
#define F first
#define S second
#define PB push_backor we an use EB for emplace back it is faster than push back
#define PRES(c,x) ((c).find(x)!=(c).end()) this is use to find whether an element is present or not



example like for(int i=0;i<n;i++)
               for(int j=i;j<n;j++)
                 print(arr,i,j)
 the whole thing can be written as 
 REP(i,0,n)
  REP(j,i,n)
   print(arr,i,j)
