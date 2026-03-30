#include<iostream>
#include<string>
using namespace std;
class A {
string name;
int age;
public:
void display(){
    cout<<"\n name = "<<name<<"\n age = "<<age;
}
A(){
    cout<<"\n person default ";name="";age=18;
}
A( string name , int age)
cout<<"person parameterized";
this->name=name;
this->age=age;

};
class B : public A{
  string rollno;
    public:
A()
    {
        cout<<"\n student default";
        rollno = "25csu356";
    }
    B(string rno,string nm,int ag):Person(nm,ag){
        cout<<"\n student parameterized";
        rollno = rno;
    }
};
class C : public 