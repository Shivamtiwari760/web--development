/*Selection Sort
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.*/
#include<bits/stdc++.h>
using namespace std;
/*it is an inplace implimentation thats called the better approach because in the naive approach we used the temp array which will cause irrelevant use of the memory so for better optimization we have used the in place implementation*/
void selection_sort(arr[]n)
{
 for(int i=0;i<n;i++)
  {
    mid_idx=i;
    for(int j=0;j<n;j++)
       if(arr[j]<arr[j+1]);
         min_idx=j;
 swap(mid_idx,arr[i]);
  }
}
