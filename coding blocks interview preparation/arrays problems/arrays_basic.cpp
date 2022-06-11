#include<iostream>
using namespace std;
int main()
{
    // initialisation of an array//
    int a[10]={0};
    // to find the size of the array//
    cout<<sizeof(a)<<endl;
    int n=sizeof(a)/sizeof(int);
    // input all the elements from the user//
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    // update a single index
    a[8]=12;
    //print all the first 10 elements//
    for(int i=0;i<10;i++)
    cout<<a[i]<<" ";
    return 0;
}