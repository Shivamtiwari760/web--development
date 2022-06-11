#include<iostream>
using namespace std;
#include"oopsstudent.cpp"// yha pr yh likhne se mera jo pura code tha class student wgrj woh sb uthkr yha iss file mein aa chuka h ab hmare commpiler ko pta chl chuka h what is student here
// agr hum direct jakr main ke andar student s1; likh denge toh compiler toh janta h nhi h ki student kon h iske liye humein student ko include krna hoga
int main()
{
    // create objects statically
    student s1;
    student s2;
    student s3,s4,s5;
    s1.age=24;
    s1.rollnumber=101;
    cout<<s1.age<<endl;
    // create objects dynamically
    student *s6=new student;
    (*s6).age=24;// yha pr * derefer ka kaam kr rha h
    (*s6).rollnumber=101;
    // ab hmare objects toh create ho gye ab humein inki propersties ko set krna h abi hum baat kr rhe h
    // object ki property specify krte waqt hum .(dot) ka use krte h kyunki agr hum s1=24; likh denge toh woh specify nhi hoga na ki 24 uski age h ya roll number isililye
    // hum use krenege s1.age=24; something like that
    // same hum uska roll no. bhi set kr skte h s1.roll no=101;
// hum aise bhi likh skte h
s6->age=23;
s6->rollnumber=24;
// yh same whi line h jo humne upar likhi thi derefer ke case
// (*s6).age or s6->age dono ka smae meaning h
// there are three types of access modifiers hmare 
/* 1 public
2 private 
3 protected
inn sbka matlab h ki hum kha se kha tak use kr skte h, agr meri kisi bhi class ka modifier private h  toh, iska yh matlab h ki woh property sirf uss class ke andar hi visible h
// uske andar tak hi accessible h, bahr woh hum access nhi kr skte na hi woh humein visible h, agr hum access krne ka try krenge toh error aa jayega
// ager  koi property public h toh woh hum apni class ke bahr khi bhi use kr skte h, kisi bhi program mein, toh jab hum class bnate h toh kya
// agr hum specigy nhi krte h toh by defaulty hmare class ki sari properties private bn jati h, private hone ki wajah se yh clas ke bahr humein visible nhi h
}