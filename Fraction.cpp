class Fraction{
private :
int numerator;
int denominator;
public : // apart from that i want to restrict that hum jb bhi class bnaye yaobject bnaye mere numerator and denominor mein garbage value nhi jani chahiye
Fraction(int numerator, int denominator){
    this->numerator=numerator;
    this-denominator->denominator;
}
void print()
{
    cout<<this->numerator<<" / "<<denominator<<endl;

}
void simplify(){
    int gcd=1;
    int j=min(this->numerator,this->denominator);
    for(int i=1;i<=j;i++){
        if(this->numerator%i==0&&this->denominator%i==0){
            gcd =i;
        }

    }this->numerator=this->numerator/gcd;
    this->denominator=this->denominator/gcd;


}
void add(Fraction f2){
    int lcm=denominator*f2.denominator;
    int x=lcm=lcm/denominator;
    int y=lcm/f2.denominator;
    int num=x*numerator+(y*f2.denominator);
    numerator=num;
    denominator=lcm;
    simplify();
}
// lcm  ko humein shortest form mein rkhna h toh toh hum kya krenge greatest commonn factor nikal lete h that is gcd or jo bhi hoga, uss gcd se numerator ko and denomintor ko devide kr denge hmra fcraction solve ho jayega

};