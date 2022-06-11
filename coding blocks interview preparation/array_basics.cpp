#include<iostream>
using namespace std;
int main()
{
    //initialisation of an array
    // you must  initialise your array
    // you can use the size of the array bys using the sizeof operator
    // if u want to find the number of elements in an array that is nothint but size of array devided by size of single element
    
    int a[10]={1,2,3};
    cout<<sizeof(a)<<endl;
    int n = sizeof(a) / sizeof(int);
    cout<<n<<" ";
    //input all the elements from the user
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    // print all the first 10 elements
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}