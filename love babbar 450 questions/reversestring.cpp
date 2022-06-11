//write  a program to reverse a string//
#include<bits/stdc++.h>
using namespace std;
string reverseword(string str);
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cout<<reverseword(s)<<endl;
    }
    return 0;
}
string reverseword(string str){
    int low=0,high=str.length()-1;
while(low<high){
    swap(str[low],str[high]);
    low++;
    high--;
}
return str;
}