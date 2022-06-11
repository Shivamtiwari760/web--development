//Given a sorted array with repetition and an element x, we need to find index of first occurrence of x.//
//index of first occurrence recursive solution//
#include<iostream>
using namespace std;
int first_occurrence(int arr[],int low,int high,int x)
{
  if(low>high)
   return -1;
  int mid=(low+high)/2;
   if(x>arr[mid])
   return  first_occurrence(arr,mid+1,high,x);
    else if(x<arr[mid])
     return first_occurrence(arr,low,mid-1,x);
     // if x is equal to mid then it has two subcases//
    else
    {
        if(mid==0||arr[mid-1]!=arr[mid])//if mid=0 then its a first occurrence ike the corner case we have(5,5,5) or if array[mid-1] is not equal to arr[mid] then also its a first occurrence, ith these case we return  mid//
        return mid;
        else
       return  first_occurrence(arr,low,mid-1,x);// otherwise we will go to the left part, because this is somewhere middle occurrence and we ae looking for first occurrence//
    }
}
int main()
{
    int arr[]={5,10,10,15,20,20,20},n=7;
    int x=20;
    cout<<first_occurrence(arr,0,n-1,x);
    return 0;
}
// recursive solution is taking much much extra spacef for function calls, so its a not a efficient solution//