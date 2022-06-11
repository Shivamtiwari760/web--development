#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int smallOutput=factorial(n-1);
    int output=n*smallOutput;
    return output;
}
int main()
{
cout<<factorial(4)<<endl;
return 0;
}
// recusrion ka matlab totla pmi pe depend krta h
// phle base case fir assume kr lena choti problem ke liye chl jayega
// agr choti problem ke liye chl rha h toh bdi prblem ke liye humein acche se code krna h
// everything will be take care by prniciple of mathematical induction and recursion