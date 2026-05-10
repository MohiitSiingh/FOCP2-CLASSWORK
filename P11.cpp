// Q.11. An online learning platform wants to store course information. 
// Each course should contain: 
// • Course name 
// • Instructor name 
// • Course duration (weeks) 
// Questions 
// 1. Create a class Course. 
// 2. Initialize course details using a constructor. 
// 3. Write a function to display course details. 
// 4. Create two course objects. 
// 5. Add a destructor that prints a message when a course object is deleted.
#include<iostream>
#include<string>
using namespace std;
class Course{
    string name;
    string instructor_name;
    int duration;
    public:
    Course(string n,string IN,int duration){
        name = n;
        instructor_name=IN;
        this->duration = duration;
    }
    void display(){
        cout<<"\nCourse details are as follows: "<<"\n course name: "
        <<name<<"\n Instructor name: "<<instructor_name<<"\n duration: "<<duration<<"weeks";
    }
    ~Course(){
        cout<<"\nCourse [ "<<name<<" ] is deleted";
    }
};
int main(){
    Course C1("Math-1","Mohit Panwar",20);
    C1.display();
    Course C2("Maths-2","Professor",20);
    C2.display();
}