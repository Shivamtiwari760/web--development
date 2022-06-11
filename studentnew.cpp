#include<iostream>
using namespace std;
#include "studentoops2.cpp"
int main()
{
student s1;
student *s2= new student;
s1.setAge(20);
s2-> setAge(26);
s1.display();
s2.dsiplay();
return 0;
}
// agr hum kabhi industrial project pr kaam kr rhe h toh huemin kuch properties koprivate krna chahiye
// get function is to read the value and set function is basically used to change edit or update any of the private property.
// s1. student mein jo student h yh special function h or iss function ko hum constructor khte h, iski kuch properties h it has same name as class, it has no return type and lests refrrame the constructor lets call it defaul constructor it has no input arguments
// so we have a special function which is call constructor
// student s1; humne likha lekin yh memory mein interepret aise hota hs1.student(); yh wla function call ho jate h now the question, kya humne iss class mein khi bhi yh student wala constructor bnaya h,
// as soon as you will create a class this constructor will autmatically , humein alag se banane ki jarurat nhi h hum automatic bne hue constructor ka use kr skte h
// or hum khud ka bhi constructor bna skte h
/* kuch aisa sa hota h hmara default constructor 
student(){

};
yh huemein free mein milta h internally uska s structure aisa hota h, jb bhi hum kisi class ka obect bnate h yh constructor call ho jata h, constructor ka kaam kya h jitne bhi data members h class ke andar un sbko unki default values se iniialise krana jo ki ek garbage value hoti h
for every object uski lifetime mein constructor sirf ek baar call hota h, kb hoga at the time of its creation
if I write student s1; toh constructor call ho jayega 
or if i'll write student s2; toh bhi whi constructor call ho jatyega agr humne apne class ka object dynamically bnaya
jaise student *s3=new student; toh bhi same hi constructor call hoga
(*s3).student
s3-> student