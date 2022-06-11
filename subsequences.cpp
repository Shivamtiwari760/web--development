#include<iostream>
using namespace std;
int subs(string input, string output[]){
    if(input.empty()){// yh h base case jiska matlab h ki string empty h uske andar abhi kuh bhi nhi h
output[0]="";
    

    }
    string smallstring=input.substr(1);
    int smallOutputSize=subs(smallstring, output);
    for(int i=0; smallOutputSize;i++){
        output[i+smallOutputSize]=input[0]+output[i];

    }
    return 2*smallOutputSize;

}
int main(){
string input;
cin>>input;
string* output= new string[1000];
int count=subs(input,output);
for(int i=0;i<count;i++){
    cout<<output[i]<<endl;
    return 0;
}
}