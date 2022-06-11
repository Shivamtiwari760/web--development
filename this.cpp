#include<iostream>
using namespace std;
int main(){
    student s1(10.1001);
    cout<<"address of s1"<<&s1<<endl;
    return 0;
}
// this work as a pointer varible, this ko use krke hum bta skte h ki hum kis property ka use kr rhe h
// copy constructor is also used in the we can write stdudent s2(s1); it means s2 is copying the data of the s1 in that
//s2.student(s1); or yh s1 kis type ka object h p