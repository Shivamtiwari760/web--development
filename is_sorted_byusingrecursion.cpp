#include<iostream>
using namespace std;
bool is_sorted(int a[],int size){
    if(size==0||size==1){
return true;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    bool issmallersorted=is_sorted(a+1,size-1);
    return issmallersorted;
    /*if(issmallersorted){
        return true;
    }else{
        return false;
    }*/
}
int main()
{

}
//recursion mein basically hue kuch particular options hi krnehote hash
/*1)base case
2) recursive call
3) small calculation
*/