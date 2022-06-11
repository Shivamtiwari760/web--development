#include<iostream>
using namespace std;
int length(char input[]){
    int count=0;
    for(int i=0; input[i]!='/0';i++){
    count++;
}
return count;
}

int main()
{
    char name[100];
    cout<<"enter your name: ";
    cin>>name;
    /*
    name[2]=0;
    name[4]='y';
    */
    cout<<"Name :"<<name<<endl;
    cout<<"Length : "<<length(name)<<endl;
    return 0;
}