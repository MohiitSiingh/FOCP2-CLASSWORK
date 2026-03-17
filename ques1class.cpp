#include<iostream>
#include<string>
using namespace std;
/*Q1. Create a class Student with data members: name and marks.
 Use a constructor to initialize 
the values and display the student details using a member function*/
class Student {
private:
string name ;
int marks 
public:
void Student(){
    cout<<"Enter name and marks : ";
cin>>name>>marks;
cout<<"\nname is: "<<name<<"\nmarks are :"<<marks<<endl;
}
}
int main (){
Student s1;

    return 0 ;
}