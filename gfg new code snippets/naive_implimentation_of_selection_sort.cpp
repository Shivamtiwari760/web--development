// function of selection sort
#include<bits/stdc++.h>
using namespace std;
void selection_sort(arr[],n)
int temp[n];
for(int i=0;i<n;i++)
{
   int min_idx=0;
   for(int j=1;j<n;j++)
     if(arr[j]<arr[j+1])
          mid_idx=j;
   temp[i]=arr[mid_idx];
   arr[mid_idx]=INF;
}
for(int i=0;i<n;i++)
arr[i]=temp[i];