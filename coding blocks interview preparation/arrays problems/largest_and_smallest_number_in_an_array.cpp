#include<iostream>
#include<climits>//for using the INT_MAX and INT_MIN for smalles and largest and the value should be taken for largest - infinity and for smallest +infinity
using namespace std ;
int main()
{
    int n,key;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
//algorithm to find the smallest and largest number
   int i;
   int largest=INT_MIN;
   int smallest=INT_MAX;
   /*for(int i=0;i<n;i++)
   {
       if(a[i]>largest)
       {
       largest=a[i];
       }
       if(a[i]<smallest)
       {
           smallest=a[i];
       }
   }*/
   largest=max(largest,a[i]);
   smallest=min(smallest,a[i]);
   cout<<"largest"<<largest<<endl;
   cout<<"smallest"<<smallest<<endl;
    return 0;
}
