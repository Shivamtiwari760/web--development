//sort in c++ stl//
// code in create your own order//     
#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x,y;/* data */
};
bool MyCmp(point p1,point p2){
return p1.x<p2.x;
}
int main()
{
 point arr[]={{1,3},{0,9},{12,13}};
 int n=sizeof(arr)/sizeof(arr[0]);
 sort(arr,arr+n,MyCmp);
 for(auto i:arr)
  cout<<i.x<<" "<<i.y<<endl;
 return 0;
}


