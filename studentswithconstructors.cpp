#include<iostream>
#include<string>
using namespace std;
class student
{private: 
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;
    public:
void inputDetails(){//setter
    cout<<"\n Enter Rollno,name,marks1,marks2 &marks3";
    cin>>rollNo>>name>>marks1>>marks2>>marks3;
}
student();
student(string,int);
student(string,int,int,int,int);
int calculateTotal(){//getter
    return (marks1+marks2+marks3);
}
void displayDetails(){
    cout<<"\n Name : "<<name<<"\n Rollno : "<<rollNo;
    cout<<"\n Marks1: "<<marks1<<"\n Marks2 : "<<marks2<<"\n Marks3 : "<<marks3;
    cout<<"\n Total = "<<calculateTotal();
}
};
student::student(){
    name="";
    rollNo=0;
    marks1=0,marks2=0,marks3=0;
}
student::student(string name,int n){
    name="";
    rollNo=0;
    marks1=0,marks2=0,marks3=0;
}
student::student(string name,int n,int m1,int m2,int m3){
    name="";
    rollNo=0;
    marks1=0,marks2=0,marks3=0;
}

int main()
{
student s1;
s1.inputDetails();
s1.displayDetails();
s2.displayDetails();
s3.displayDetails();
    return 0;
}