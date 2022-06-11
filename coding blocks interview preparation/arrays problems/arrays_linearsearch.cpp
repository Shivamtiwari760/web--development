#include<iostream>
using namespace std;
// linear search 
// a particular element in an array
int main()
{
    int n, key;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
// ask for the element we want to search
  cout<<"enter the element you want to search";
  cin>>key;
// find out the index of that element by traversing the array
// linear search algorithm
 int i;
  for(i=0;i<n-1;i++)
  {
      if(a[i]==key)
      {
          cout<<key<<" found at"<<i<<"index";
          break;
      }
  }
  if(i==n)
  {
      cout<<key<<"is not present"<<endl;
  }
    return 0;
}