#include<iostream>
using namespace std;
int main()
{
    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;
     a[0]=5;
     a[1]=10;
    cout<<*a<<endl;
    cout<<*(a+1)<<endl;
    int *p=&a[0];
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<&a<<endl;
    //ek cheej humne or discuss kri thi size of a and p
    cout<<sizeof(p)<<endl;
    cout<<sizeof(a)<<endl;
    //iske output mein p ke case mein woh humein pointer ka size lake de dege or arrays ke case mein woh humein arrays ka size lake de dega which is 40
    // and the 3rd difference was  i am saying
    p=p+1;
    // p ke coreseponding hum kr skte h pr a ke corresponding aisa nhi kr skte error aa jayega
    p=a+1; // tum yh krlo a+1 kis or cheej mein store krlo, but a ko resssign nhi kr skte that what the because a ke corrsepondig koi alago memory h hi nhi
    // jb alag memeory hi nhi h toh store kaise kroge
    // yrr jb a=a+1; nhi kr skte toh a++ bhi nhi kr skte
    return 0;


}
//yh par output mein a[0] ka jo address tha wo hi or jo pointer h woh khi or stored h
