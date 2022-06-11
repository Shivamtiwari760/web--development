#include<iostream>
using namespace std;
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
// isme kya kiya humne agr double pointer ka use kre by using the double pointer
// we can generallly store the adddress of anoher pointer
// phle humne p2 print kra liya joki double pointer the jisne addreee
// store kiya hua tha phle wale pointer ka
// uske bad humne phle wale pointer ka address print kr ke dekh liya
// dona ka address same hi  aaya toh yhi h significance double pointer use krne ka
// yha pr basically chl kya rha h aapke pass p2 h jisme
//p ka address h or p ke pass i ka address h
// agr main p print krunga toh woh i ka addree print krega agr main
// or agr main*p2 print krunga toh woh derefence krke p pr jayega or waha pr
// jo likha hua a usko print kr dega
// toh dono ke dono same print krenge
// just to confirm u can print addresss of i here
// the last three values are exactly the same
// *p ka kya matlab h ki maine p ko defrenece krke i pe chla gya
//**p2 ko alag hum print krenge toh yha pr teeno ko teeno same cheej ko point kr rhe h toh ek hi cheej print hogi yha
// three diffrent route se hum same jagah pahuch rhe h