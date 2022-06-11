// union of two sorted arrays by using the efficient approach
/* example :-
a[]={ 3,5,8}
b[]={2,8,9,10,15}
output= 2,3,,5,8,9,10,15.
only distinct elements should be present in this*/
#include<bits/stdc++.h>
using namespace std;
void Print_union(int a[], int b[], int m, int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i-1]==a[i])// these conditions are also for handling duplicates, there exist a previous element and the current element is same as the previous element then, so we simply ignore the element, continue means simply ignoren and move ahead
        {
            i++;
            continue;
        }
        if (j > 0 && b[j - 1] == b[j]) // these conditions are also for handling duplicates, there exist a previous element and the current element is same as the previous element then, so we simply ignore the element, continue means simply ignoren and move ahead
        {
            j++;
            continue;
        }
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]<b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else
        {
            cout<<a[i]<<" ";// if they ares same then we only print a[i] as per question requirements and we increment both i and j, we are only printing a[i] because w dont want to print duplicates
            i++;
            j++;
        }
    }
    while(i<m)// this while looop is use for the remaining element in the array so we procees them, and we have to ensure that this is not same as previous element
    {
        if(i==0||a[i]!=a[i-1])
          cout<<a[i]<<" ";
          i++;
    }
    while (j < n) // this while looop is use for the remaining element in the array so we procees them,and we have to ensure that this is not same as previous element
    {
        if(j==0||b[j]!=b[j-1])
         cout<<b[j]<<" ";
         j++;
    }
}
// these above both while loops will not execute simultaneously either element will be left in array1 and either element will be left in array 2
int main()
{
    int a[]={3,8,8};
    int b[]={2,8,8,10,15};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    Print_union(a,b,m,n);
}
// time complexity is upper bounded by O(m+n)
// space complexity is O(1) we are simply printing the elements we are not storing anything