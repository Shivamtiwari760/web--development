//isme strcpy function k use kiya gya h srtring copy krne ke liye.

#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char input1[100] = "abcd";
    char input2[100] = "hello";
    cout<<"before copying: ";
    cout<<"input1 :"<<input1<<endl;
    cout<<"input2 :"<<input2<<endl;
  //  strcpy(input1, input2);
  strncpy(input1, input2,3);
    cout<<"after copying :";
    cout<<"input1 :"<<input1<<endl;
    cout<<"input2 :"<<input2<<endl;
    return 0;
   // cin>>input1;
    //cin>>input2;

}
//ek strncpy krke bi function hota h woh kya krta h
//strncpy(destination_string,source string, n)
//strncpy(input1, input2,3) isme kya hotah puri string nhi copy krta bs input 2 ke starting ke 3 words print kr deta h or last  mein null character ke liye jagah chod deat h
//strncpy khud se null add nhi krta