#include<iostream>
using namespace std;
bool isprime(int n){
    int d=2;
    while(d<n)
    {
        if(n%d==0)
        {
            return false;
        }
        d++;
    }
    return true;
}
int main(){
    bool isprime;
bool ans = isPrime(31);
	cout<<ans<< endl;
	ans = isPrime(85);
	cout <<ans<< endl;
    return 0
    }