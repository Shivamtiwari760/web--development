//Here we take a single array with three points namely, the lower, the middle and the highest point. The elements from the lower to the middle are sorted and the elements from the (middle+1) to the higher are sorted. The task is to merge these two sorted parts into one.//
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int L,int m,int h)
{
    int n1=m-L+1,n2=h=m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
       left[i]=arr[i+L];
    for(int j=0;j<n2;j++)
       right[j]=arr[m+1+j];
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
      if(left[i]<=right[j])
        arr[k++]=left[i++];
      else
        arr[k++]=right[j++];
    }
    while(i<n1)
     arr[k++]=left[i++];
    while(j<n2)
     arr[k++]=right[j++]; 
}
int main()
{
int a[]={10,15,20,40,8,11,15,22,25};
int L=0,h=8,m=3;
merge(a,L,m,h);
for(int x:a)
  cout<<x<<" ";
}