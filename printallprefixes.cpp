//isme strcpy function k use kiya gya h srtring copy krne ke liye.

#include<iostream>
using namespace std;
#include<cstring>
void printAllprefixes(char input[]){
    //i represent end index and of my prefix
for(int i=0;input[i]!='\0';i++){
for(int j=0;j<=i;j++){
    // j represnet the start index of my prefix
    cout<<input[j];
}
cout<<endl;
}
}
int main()
{
    char input1[100] = "abcd";
    printAllprefixes(input1);
    /*
    char input2[100] = "hello";
    cout<<"before copying: ";
    cout<<"input1 :"<<input1<<endl;
    cout<<"input2 :"<<input2<<endl;
  //  strcpy(input1, input2);
  strncpy(input1, input2,3);
    cout<<"after copying :";
    cout<<"input1 :"<<input1<<endl;
    cout<<"input2 :"<<input2<<endl;
    return 0;*/
   // cin>>input1;
    //cin>>input2;
return 0;
}
//ek strncpy krke bi function hota h woh kya krta h
//strncpy(destination_string,source string, n)
//strncpy(input1, input2,3) isme kya hotah puri string nhi copy krta bs input 2 ke starting ke 3 words print kr deta h or last  mein null character ke liye jagah chod deat h
//strncpy khud se null add nhi krta