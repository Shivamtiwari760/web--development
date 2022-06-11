#include<iostream>
using namespace std;
 int length(char s[]){
     if(s[0]=='\0'){
         return 0;
     }
     if(s[0] !='X'){
         removeX(s+1);
     }else{
         int i=1;
         for(;s[i]!='\0';){
             s[i-1]=s[i];
         }
         s[i-1]=s[i];
         removeX(s);
     
     }
     int smallStringlength=length(s+1);
 return 1+ smallStringlength;
 }
int main()
{
    char str[100];
    cin>>str;
    int l=length(str);
    cout<<l<<endl;
    removeX(str);
    cout<<str<<endl;
    l=length(str);
    cout<<l<<endl;
    return 0;
}