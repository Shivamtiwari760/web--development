#include<iostream>
using namespace std;
class student;
{
    public : 
    int rollNumber;
    private :
    int age;
    public :
    // default constructor, ek cheej or jaise hi humne apna khud ka constructor likh dia, inbuilt wala constructor ab hmare liye available nhi rhega, ab jab bhi tum object bnaoge jo internal wala tha woh call nhi hoga jo tumne bnaya h woh wala call hoga, iska kaam same hi agr hum koi object bnayenge uski default value ko zero se initialise kr dega
    Student(){
    cout<<Constructor called!<<endl;
    }
    void display(){
        cout<<age<<" "<<rollNumber<<endl;

    }
    int getAge(){
        return age;S
    }
    void setAge(int a, int password){
        if (password!=123){
            return;
        }
        age =a;
    }
}