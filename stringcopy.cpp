//isme strcpy function k use kiya gya h srtring copy krne ke liye.

#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char input1[100] = "abcd";
    char input2[100] = "def";
    cout<<"before copying: ";
    cout<<"input1 :"<<input1<<endl;
    cout<<"input2 :"<<input2<<endl;
    strcpy(input1, input2);
    cout<<"after copying :";
    cout<<"input1 :"<<input1<<endl;
    cout<<"input2 :"<<input2<<endl;
    return 0;
   // cin>>input1;
    //cin>>input2;

}