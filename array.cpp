#include<iostream>
#include<climits>
using namespace std;
void printArray(int input[]){
   cout<<"Function :"<<sizeof(input)<<endl;
   
}
int main()
{
    int n;
    cin>>n;
    int input[100];
    cout<<input<<endl;
}
   for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    cout<<"Main :"<<sizeof(input)<<endl;
    printArray(input);


    void reverse(int input()[], int n)
    {
        int i=0,j=n-1;
        while(i<j)
        {
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;

        }
    }
    /*
    for( int i=0;i>n;i++)
    {
        cout<<input[i]<<endl;
    }
    int max = input[0];
    for(int i=1;i<n;i++){
        if(input[i]>max){
            max=input[i];
        }
    }
    cout<<max<<endl;
}*/