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
    char input[19];
    cin.getline(input,19,'z');
    cout<<input<<endl;
    return 0;
}