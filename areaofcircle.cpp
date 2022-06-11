#include<iostream>
using namespace std;
double findarea(double radius){
   double area=radius*radius;
    return area;
}
int main()
{
    double radius;
    radius=5.8;
    double c=findarea(radius);
    cout<<c<<endl;
    return 0;
}

