#include<iostream>
using namespace std;
void printarray(int input[], int n)
{
    for(int i=0;i<n;i++)
    {
cout<<input[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int array[],int n)
{
    for(int j=0;j<n-1;j++)
    for(int i=0;i<n-1-j;i++){
        if(array[i]>array[i+1])
        {
 int temp=array[i];
array[i]=array[i+1];
array[i+1]=temp;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int input[100];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    bubblesort(input, n);
    printarray(input, n);
}