#include<iostream>
#include<string>
using namespace std;
class Person{

string name;
int age;
public:
void display(){
    cout<<"\n name = "<<name<<"\n age = "<<age;
}
person(){
    cout<<"\n person default ";name="";age=18;
}
person( string name , int age)
cout<<"person parameterized";
this->name=name;
this->age=age;
};
class Student : public Person{
    string rollno;
    public:
Student()
    {
        cout<<"\n student default";
        rollno = "25csu356";
    }
    Student()
}