#include<iostream>
using namespace std;
void printArray(int a[][5],int m, int n)
{
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int a[5][5]= {{1,2},{3,4}};
    printArray(a,5,5);
}
    /*
    int a[100][100];
    int m,n;
    cin>>m>>n;
    //taking input 
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    printArray(a,m,n);
    return 0;
}*/
// we have int b[5][5];
                // R c ek row h or ek column h
//  suppose we have m=3; and n=2 
//a[i]][j] calculate karne ke liye hmare pass
//formula h c*i+j
//a[2][1] = 5*2+1 =11           
// like how to specify the value in 2d array
// int a[]={1,2,3};
// similarly in the 2darray we can do the same
//int b[][]={{1,2}{3,4}{5,6}};