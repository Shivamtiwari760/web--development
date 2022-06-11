#include<iostream>
using namespace std;
int main()
{
    string *sp=new string;// created a string dynamically
    *sp="def";
    cout<<sp<<endl;
    cout<<*sp<<endl;
    string s="abc";
    getline(cin,s);// yh use hota h input mein agar space ka bhi use ho lne emien toh koi deikkat nhi hoti
    cout<<s<<endl;
    s="shivam";
    cout<<s[0]<<endl;
    s[0]='n';
    string s1;
    s1=s;
    string s4="coding";
    string s9 =s1+s4;
    s+=s9;
    cout<<s9<<endl;
    cout<<s<<endl;
    cout<<s1<<endl;
    cout<<s4<<endl;
    cout<<s.size()<<endl;
    cout<<s.substr(2)<<endl;// yh humein 2nd  aage ka sbkuch lake de dega
    cout<<s.substr(2,2)<<endl;//isk matlab h 2nd element se lekr bss 2 or element chahiye mujhe
    cout<<s.find("cod")<<endl;//isse hum string ke andar find bhi kr skte h ki kya iske andar def aata h kya 

    return 0;
}