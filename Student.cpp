class Student{
    int age;
    char*name;
    public :
    Student(int age, char *name){
    this->age=age//this ek pointer ki tarh work krta h yha pr hum apne data member age mein iss parameter mein dalna chahte h isilye humne this use kr lia
    this->name=name;

    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};