#include<iostream>
using namespace std;
void increment1(int**p)
{
p=p+1;//iss wale case mein chnages reflect nhi honge
}
void increment2(int**p){
    *p=*p+1;// but iss wale case mein changes reflect ho jayenge beacuse humne iss baar pinter ka address hi de dia iska matlab main ek slip di aapko uss slip 
    //mein ek or slip h or uske andar address h toh aapko woh dusri wali slip ka ddress change kroge roh original address chnage ho jayega
// this will work jo tum krna chahte ho woh ho jayega
}
void increment3(int**p)
{
    **p=**p+1;// obviosly iss case mein bhi chnages reflect ho jayenge
}
int main()
{
    int a=10;
    int *p=&a;
    int **p2=&p;
    cout<<p2<<endl;
    cout<<&p<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    return 0;
}