#include<iostream>
using namespace std;
int main(){
    int real1,imaginary1, real2, imaginary2;
    cin>>real1>>imaginary1;
    cin>>real2>>imaginary2;
    ComplexNumbers c1(real1,imaginary1);// passsing this object by oassing the  parametrized constructor us parametrized constructor mein kya ho rha hoga, jo humne real set kiya hua h or jo imaginary set kiya h woh set ho jayega, yh humne parametrized constructor isiliye call kiya ki iski jagah khi garbage value na set ho ajye isme isiliye humne isme parametrized constructor ko call kiya
    ComplexNumbers c2(real2, imaginary2);
    int choice;
    cin>>choice;
    if(choice==1){
        c1.plus(c2);
        c1.print();
    }
    else if(choice==2){
        c1.multiply(c2);
        c1.print();

    }
    return 0;
}
}
