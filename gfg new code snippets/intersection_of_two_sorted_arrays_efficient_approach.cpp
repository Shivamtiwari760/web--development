#include<bits/stdc++.h>
using namespace std;
void intersection(int a[], int b[], int m, int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a>0&&a[i-1]==a[i])// this is to avoid the duplication  and to check previous element is not same as next one and here i>0 so that the negative element would not be considered here
        {
          i++;
          continue;
        }
        if(a[i]<b[j])
        {
          i++;
        }
        else if(a[i]>b[j])
        {
          j++;
        }
        else
        {
          cout<<a[i]<<" ";
          i++,j++;
        }
   }
} 
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={5,6,7,8,9};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    intersection(a,b,m,n);
}
