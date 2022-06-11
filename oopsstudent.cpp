// class is basically a blueprint like 
/* name-
   class 
   roll no.
   age
   */
  // it is a class but when we are going to fill these valuse for  a partictlau students thats called an object
  /* name= shivam tiwari
    class -15
    roll no. =61
    age=22
    */
   public :
   // actually jo functions and properties hoyi h na kis bhi obejct ko use hum class khte h
   // or class ki copy create krne ke baad jo hum individual copy pr kaam krte h usko object khte h
   class student{
       // so abhi ke lest assume ki mere student ke pass do hi properties h, roll no or age
 int rollnumber;
 int age;
   };
   // so basically this is the syntax to create a class
   // so humne class kaise bnate h yh toh dekh liya tha now
   // lets see ki iss class ka object kaise bnate h
   //  int a; iska matlab h I am creating a variable of name integer ab mere paas
   // where a is my name of variable so  basically what I am creating a variable of type integer
   // ab kya krna h ab mere pass ek class h student jiski do properties h
   // one is age and other is roll number or mujhe iss
   // student class ka ek object bnana h s1 humein iss template/class ki copy create krni hoti h
   // isko agr reframe kre toh yh kya ho skta h i want to create a variable jiska naam s1 h of type student
   // because classes are basically user defined data  types
   // student s1;
   // here s1 is the name of my variable of class type student
   // phle toh hum a ko varible bol rhe the lekin yha pr humein s1 ko object bolna h
   // if I am writing student s2;
   // toh firse hmare liye ek obejct s2 create hoga firse memory bock bnega or uske andar age or roll number store hoga
   // abhi jo humne object create kiya woh h statically I hope we all know hat what is static and dynamic
   //abhi tak kya hua humne obejct ko statically create kiya toh usme 
   /* int a;
    student s1;
    student s2;
    toh isme memory to create ho gyi pr usme abhi garbage valuse rkhi hui h
    ab hum dekhenge dynamicall kaise create krte h
    int *a= new int; aise hi ilkte h na new int liknhne se humein heap wali large wali memory mein ek 4 bytes ki memory mil jati h
    or 8 bytes ka pointer variable banta h jiska naam hota h a,
    ab agr mujhe apna student class ka object bnana h dynamically toh kaise
    same structure rhega isme bhi like
    student *s1=new student; kyuki mujhe student type ka obejct create krna h isiliye ab kya hoga
    iske baad pointer or heap wali memory mein space create ho gya hoga jisme age or roll number hoga or pointer wale mein s1 hoga
    age or roll no. ka address agr maan lo 1080 h toh iss s1 ke pass 1080 pada hoga or kuch garbage valuse pdi hogi 
*/