#include<iostream>
#include<string>
using namespace std;
class A {
    protected:
string name;
int age;
public:
void display(){
    cout<<"\n name = "<<name<<"\n age = "<<age;
}
A(){
    cout<<"\n person default ";name="";age=18;
}
A( string name , int age){ 
cout<<"person parameterized";
this->name=name;
this->age=age;
}
};
class B : public A{
    protected:
  string rollno;
    public:
B()
    {
        cout<<"\n student default";
        rollno = "25csu356";
    }
    B(string rno,string nm,int ag):A(nm,ag){
        cout<<"\n student parameterized";
        rollno = rno;
    }
    void display(){
    cout<<"\n name = "<<name<<"\n age = "<<age<<"\n roll no is" << rollno;
}
};
class C : public A{
    protected:
  string rollno;
  string sec;
    public:
C()
    {
        cout<<"\n student default";
        rollno = "25csu356";
    }
    C(string rno,string nm,int ag,string sc):A(nm,ag){
        cout<<"\n student parameterized";
        rollno = rno;
        sec = sc;
    }
      void display(){
    cout<<"\n name = "<<name<<"\n age = "<<age<<"\n roll no is" << rollno<<"\n sec is"<<sec;
}

};
class D : public B , public C{
   protected:
  string rollno;
  string sec;
    public:
D()
    {
        cout<<"\n student default";
        rollno = "25csu356";
    }
    D(string rno,string nm,int ag,string sc):A(nm,ag){
        cout<<"\n student parameterized";
        rollno = rno;
        sec = sc;
    }
    cout<<"\n Multilevel";
      void display(){
    cout<<"\n name = "<<name<<"\n age = "<<age<<"\n roll no is" << rollno<<"\n sec is"<<sec;
}
};
int main(){ 
 A A1;
 A1.display();
 A A2("Mohit",19);
 A2.display();
 B B1,B2("25csu356","Mohit",19);
  B1.display();
 B2.display();
C C1,C2("25csu356", "Mohit", 19, "A");
C1.display();
C2.display();
}