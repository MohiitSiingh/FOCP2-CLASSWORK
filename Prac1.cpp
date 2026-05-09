// Q1. Create a class Student with data members: name and marks. 
// Use a constructor to initialize 
// the values and display the student details using a member function. 
#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int marks;
    public :
    Student(string n,int m){
        name = n;
        marks =m;
    }
    void display(){
        cout<<"Name is :"<<name<<"\n marks obtained : "<<marks;
    }
};
int main(){
Student s1("Mohit Panwar",99);
s1.display();
    return 0;
}