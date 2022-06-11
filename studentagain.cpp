#include<iostream>
using namespace std;
#include"Student.cpp"
int main(){
    student s1(10,1001);
    cout<<"s1 : ";
    s1.display();
    student s2(s1);
    cout<<"s2 :";
    s2.display();
    return 0;
    // we have copy assignment operator also which is nothing but the (=)
    /* lets see an example we have stduent s1(10,1001);
    student s2(20,2001);. we just want to copy the value of s1 into s2, kya object create krne ke baad can I calll copy constructor,copy constructor toh call nnhi kr payenge
    ek object ki lifetime mein hum ek baar se jyada constructor call nhi kra skte, ab agr humein 21 ki valuse ko s2 mein dalmne h toh humein exoplictly hi dalne padega s1.age=s2.age
    pr humein aisa krne ki jarurat nhi h we can easily do by just using the copy assigfnment constructor(=)
    which is s2=s1;
    iska matlab h s2.age=s1.age ,  iska matlab h ki s2 ki age mein s1 ka age aa jayega

    copy assignment constructor hmara kam kr dega explicityly s1 ki values s2 mein copy kr dega

copy assignment construtor kab hep krta h hmari jb 2 object memory mein phle se hi present h
next function wehave is destructor , iska kaam kya hota jo hmari memory mein
destructor has same name as our our class like constructor
it has no return type 
and it takes no input arguments 
most of the properties construcctor and destructor ki same hoti h toh hum ise diffrentiate kaise kre
toh ek better way h in dono ko difrentiate krke ka ki hmare pass ek special symbl hota h jise hum tilda bolte h, woh hum lgate h destructor ke aage 
or uska structure kuch aisa hota h
~student(){

}
yh bhi humein class create krte hi automaticall create ho jata h
or iska kaam kya hota hmare object ki memory ko deallocate krana, destructor bhi ek object ki lifetime mein sirf ek baar hi call hota h blkl last mein jb hmara object ka scope finish hne wala hota h uss time pr destructor call ho jata h, before exiting from the fuction
destructor mein hum argument pass nhi jkr skte jaise consstructor hum bahut sare bna skteh pr destructor hum bahut sare nhi bna skte yh destructor hum ek hi bna skte h, jaise i aap apmna constructoe bnaoge default wala destructor hmare liye accessible nhi rhega
lest create the destructor here only*/
~student(){
    cout<<"destructor called!"<<endl;
}
}
