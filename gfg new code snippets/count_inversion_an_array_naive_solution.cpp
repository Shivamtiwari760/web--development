/*count inversion in array naive solution
This video discusses the problem of taking an unsorted array and counting the inversions in it. There are two conditions for the  elements to be inverse:

1)arr[i] > arr[j]
2)i < j
 what is an inversion in an array
a pair(arr[i],arr[j]) forms an inversion when i<j and arr[i]>arr[j].
it means a greater element appears before an smaller element, if that happens we can these two elements inversion
example - we have to count how many inversion thi array has
input- {2,4,1,3,5}
output-3
there are three inversions here (4,1) (4,3) and (2,1).
input-{10,20,20,40}
output- 0
when ou have array sort in increasing order than the number of inversion are always zero
input - {40,30,20,10}
output- 6
when you have array is sorted in decreasing order, the number of inversions are always maximum possible, so in general if your arrays is sorted in decreasing order, then your first element have (n-1) inversions, and the second on element is going to form (n-2) inversions and the last element is going to make 1 inversion.
(40,30),(40,20),(40,10), (30,20), (30,10)(20,10).
here is the naive soloution to solve the problem here is the idea i sto traverse all the elements from first element to second last element, for every elements we count how many elements are their in right side of this which are smaller than this element, and that how cwe count inversions where this particular element is greater part of the inversion
function for inversion of an array
int count_inversion( int arr[], int n)
{
    int res=0;
    for(int i=0i<n-1;i++)( we are going for the second last element becaue the last element there wont be anything on the right side of it and we need to count how many elements are their which are smaller than this element)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                res++;
            }
        }
    }
    return res;
}

dry run-
{2,4,1,3,5}
res=0
i=0: res=1;( so we begin with two we get only one which is smaller than two, we get the count as one)
i=1:res=3;( now we come to four we get how many elements ae smaller so our count is updated as 3 )
i=2:res=3;( now we come ro 1 here o any element is smaller than 1 so our count remains the same)
i=3:res=3;(se we come to three  there is no element ios smaller so our result remains three.and at the end e return the result.
now the time complexity it clearly O(n^2).
*/
#include<bits/stdc++.h>
using namespace std;
void Count_inversion(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                res++;
        }
    }
    return res;
}

int main()
{
    int arr[]={2,4,1,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Count_inversion(arr,n);
}

