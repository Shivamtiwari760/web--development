#include<iostream>
using namespace std;
int main(){
    int i=5,j=3;
    (i+=j) +=j;
    cout<<i<<" "<<j<<endl;
}