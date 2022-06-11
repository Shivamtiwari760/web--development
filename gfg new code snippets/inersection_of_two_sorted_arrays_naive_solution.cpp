//this is the naive solution to solve the problem
#include<bits/stdc++.h>
using namespace std;
void Intersection(int a[], int b[],int m, int n)
{
    for(int i=0;i<m;i++)
    {
      if(i>0 && a[i]==a[i-1])// this is to avoid copy of the element so that we checked a[i] and a[i-1] should not be same and fo that case also we have done i>0 because if we dont do tha condition it will check for negative values that is not possible
        continue;
      for(int j=0;j<n;j++)
       {
           if(a[i]==b[j])
           {
            cout<<a[i]<<" ";
            break;
           }
       }
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={3,4,89,40,90};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    Intersection(a,b,m,n);

}
// time complexity =O(n*m)
/* example:
a[]={1,20,20,40,60}
b[]={2,20,20,20}
i=0: j=0,1,2,3
i=1: j=0,1
print(20)
i=2: 
i=3: j0,1,2,3
i=4: j=0,1,2,3
*/