/* count inversion of an array efficient approach
here is the idea is based  on merge sort
we divide the array into two halves, we sort two halves recursively and then we merge two arrays ,we do exactly what the merge sort does
but with merge sort operation we do inversion while sorting the array, we count inversions in the right half and we count inversion in the right half, and when we are merging we count inversions, where one element is from the left half and the another elements is from right half
function for count_inversion for efficeint approach
int count_inversion
{
    int res=0;
    if(l<r)
    {
        int m=(l+r)/2;
        res= res+count_inversion(arr,l,m);
        res= res+count_inversion(arr.m+1,r);
        res=res+count_inversion(arr,l,m,r)
    }
    return res;
}
*/
#include<bits/stdc++.h>
using namespace std;
int count_and_merge(int arr[], int left, int mid, int right)
{
    int n1=mid-left+1,n2=right-mid;
    int left[n1], right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[i+left];
    }
    for(int j=0;i<n2;j++)
    {
        right[_J]=arr[mid+1+i];
    }
    int res=0, i=0,j=0,k=left;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else
        {
            arr[k++]=right[j++];
            res=res+(n1-i);
        }
    }
    while(i<n1)
    {
        arr[k++]=left[i++];
    }

    while(j<n2)
    {
        arr[k++]=right[j++];
    }
    return res;
}
int Count_inversion(int arr[], int left, int right)
{
    int res=0;
    if(left<right)
    {
        int mid=(left+right)/2;
        res=res+Count_inversion(arr,left,mid);// these functions not only calls he inversions they also sort the function from left to right
        res=res+Count_inversion(arr,mid+1,right);
        res=res+Count_and_merge(arr,left,mid, right);// this function is very similar to merge function or merge sort, the fuction is ditto same apart from we have added some result statemet also here

    }
    return res;
}

int main()
{
    int arr[]={2,4,1,3,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<Count_inversion(arr,0,n-1);
}
