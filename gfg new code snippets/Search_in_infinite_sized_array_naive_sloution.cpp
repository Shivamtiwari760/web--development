//Given an infinite sized array, we need to write an efficient solution to search an element. In this video, we have discussed two solutions.//
//search in an infinite sized array naive solution//
#include<iostream>
using namespace std;
int Search(int arr[], int x)
{
    int i=0;
    while(true)
    {
    if(arr[i]==x)
     return i;
    if(arr[i]>x)
     return -1;  
    i++;
    }  
}
int main()
{
    int arr[]={1,2,3,4,5};
    int x=4;
    cout<<Search(arr,x);
    return 0;
}