/*get largest element in array here is the solution of naive approach*/
#include<iostream>
using namespace std;
int getlargest(int arr[], int n){
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if(flag==true)
            return i;   
    }
    return -1;
}
int main(){
    int arr[]={5,8,20,10};
    cout<<getlargest(arr,4);
    return 0;
}
/*efficient function just write the new code that will decrease the time time complexity and performs better*/
int getlargest(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    if(arr[i]>arr[res])
    res=i;
    return res;
    
}