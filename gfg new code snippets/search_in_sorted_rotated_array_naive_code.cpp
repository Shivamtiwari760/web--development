// approach to search an element in a sorted and rotated array.//
#include<iostream>
using namespace std;
int Search(int arr[],int n,int x)
{
  for(int i=0;i<n;i++)
     if(arr[i]==x)
       return i;
  return -1;
}
int main()
{
    int arr[]={10,20,50,50,70},n=5;
    int x=70;
    cout<<Search(arr,n,x);
    return 0;

}