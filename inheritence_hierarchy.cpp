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

};