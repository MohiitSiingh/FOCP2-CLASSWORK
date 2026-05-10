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
    string istructor_name;
    int duration;
    public:
    Course(string n,string IN,int duration){
        name = n;
        istructor_name=IN;
        this->duration = duration;
    }
    void display(){
        cout<<"Course details are as follows: "<<"\n course name: "
        <<name<<"\n Instructor name: "<<"\n duration: "<<duration<<"weeks";
        
    }
}