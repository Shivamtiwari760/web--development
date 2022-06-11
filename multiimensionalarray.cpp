#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int **p=new int*[m];
    for(int i=0;i<m;i++)
    {
        p[i]=new int[i+1];
        for(int j =0; j<n; j++)
        {
          cin>>p[i][j];
        }
    }
    for(int i=0;i<m;i++){
        delete [] p[i];
    }
    delete [] p;
}
// jaha pr hmne dynamically memory allocate jri h wha humein 
// delete function ka use kaise krke memory ki safai bhi krni h
// kyunki humein memory leak nhi krni h