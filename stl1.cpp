#include<iostream>
#include<cstring>
using namespace std;
//linear search problem this isbut if u want to work for all kinds of arraasy then what you  should do then you should make this function as a generic fuction okay
// the way to use it by using the template
int a;
int pos;
template<typename T>
int search(int arr[],int n, T key){
    for(int pos=0;pos<n;pos++){
        if(a[pos]==key){
            return pos;
        }
    }
    return n;
}

int main(){

int a={1,2,3,4,10,12};
int n=sizeof(a)/sizeof(int);
int key=10;
//cout<<search(a,n,key)<<endl;
float b[]={1.1,1.2,1.3};
float k=1.2;
cout<<search(b,3,k)<<endl;
return 0;
}