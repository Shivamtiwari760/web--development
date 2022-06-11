#include<iostream>
using namespace std;
void insertionsort(int array[],int n){
for(int i=0;i<n;i++)
{
    int current=array[i];
    for(int j=i-1;j>=0;j--)
    if(current<array[j]){
        array[j+1]=array[j];
    }
    else{
        break;
    }
}
array[j+1]= current;

int j; current;
void printarray(int input[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
    cout<<endl;
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
    insertionsort(input, n);
   printarray(input,n);
}