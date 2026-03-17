#include<iostream>
#include<string>
using namespace std;
/*Q1. Create a class Student with data members: name and marks.
 Use a constructor to initialize 
the values and display the student details using a member function*/
class Student {
private:
string name ;
int marks ;
public:
Student(string n,int m){
  name=n;
  marks=m;
}
void displaydetails(){
cout<<"\nname is: "<<name<<"\nmarks are :"<<marks<<endl;
}
};
int main (){
Student s1("Mohit ",99);

s1.displaydetails();
    return 0 ;
}