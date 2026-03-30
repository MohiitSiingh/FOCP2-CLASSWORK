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
B()
    {
        cout<<"\n student default";
        rollno = "25csu356";
    }
    B(string rno,string nm,int ag):Person(nm,ag){
        cout<<"\n student parameterized";
        rollno = rno;
    }
    void display(){
    cout<<"\n name = "<<name<<"\n age = "<<age<<"\n roll no is" << rollno;
}
};
class C : public A{
  string rollno;
  string sec;
    public:
C()
    {
        cout<<"\n student default";
        rollno = "25csu356";
    }
    C(string rno,string nm,int ag,string sc):Person(nm,ag,sc){
        cout<<"\n student parameterized";
        rollno = rno;
        sec = sc;
    }
      void display(){
    cout<<"\n name = "<<name<<"\n age = "<<age<<"\n roll no is" << rollno<<"\n sec is"<<sec;
}

};
int main(){ 
 A A1;
 A1.display();
 A A2("Mohit",19);
 A2.display();
 B B1,B2("25csu356","Mohit",19,);
  B1.display();
 B2.display();
C C1,C2("Mohit",19,"25csu356", "A");
}