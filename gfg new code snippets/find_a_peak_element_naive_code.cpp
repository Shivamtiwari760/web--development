//find a peak element -> a peak element is a number which is not smaller than its neighbour,means the number is greater then both the numbers by which it is surrounded//
//naive solution to solve the problem find a peak element//
/* example:
input:arr[]={5,10,20,15,7}
output=20(here 20 is greater among its all neighbor's)
input:arr{10,20,15,523,90,67}
ouput: 20 or 90( here both 20 and 90 are greater among their neighbour )
input:arr[]={80,70,60}
output:80()
please note that if your element is the leftmost element then you only need to check the element after it, here 80 is theleftmost element so we need to compare with element after it so here 80 is greater.
if you are taliking about rightmost element and there is no any elememt after it so we need to check an element before it
ex- input:arr[]={80,70,90}
output:80 or 90
both 80 or 90 is greater than their neighbour and 90 is considerred as peak element among its neighbor's and we need to check the element before it
base case input:{10}
output:10, in the base case if there is one element then its called base element and we no need to compare with its neighbour*/
#include<iostream>
using namespace std;
int Get_Peak(int arr[],int n)
{
    if(n==1);
     return arr[0];
    if(arr[0]>=arr[1])
     return arr[0];
    if(arr[n-1]>=arr[n-2])
     return arr[n-1];
    for(int i=1;i<n-1;i++)
       if(arr[i]>=arr[i-1]&&arr[i]<=arr[i+1])
         return arr[i];

}
int main()
{
    int arr[]={10,30,20,40,10},n=5;
    cout<<Get_Peak(arr,n);
    return 0;
}