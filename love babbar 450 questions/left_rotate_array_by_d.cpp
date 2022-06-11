//program of (_Left_Rotate_Array_by_d_(Time_dN).cpp) left rotate of elements by d posyion in the time dN//
#include<bits/stdc++.h>
using namespace std;
//function to rotate an array by d elements//
 void leftrotateone(int arr[], int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void leftrotate(int arr[],int d, int n)
{
  for(int i=0;i<d;i++)
  {
      leftrotateone(arr,n);
  }
}
//driver code//
int main(){
    int arr[]={1,2,3,4,5},d=2,n=5;
    cout<<"array before rotation by d elements"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    leftrotate(arr,d,n);
    cout<<"array after rotation by d elements"<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
return 0;
}
