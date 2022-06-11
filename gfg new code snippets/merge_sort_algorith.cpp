#include<bits/stdc++.h>
using namespace std;
void merge_sort(int arr[],int l,int r)
{
    if(r>l)
    {
    int mid=(l+(r-l))/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    merge(arr,l,mid,r);
    }
}