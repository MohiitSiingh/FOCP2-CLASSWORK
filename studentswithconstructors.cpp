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
student::student(string n,int rn){
    name=n;
    rollNo=rn;
    marks1=0,marks2=0,marks3=0;
}
student::student(string n,int rn,int m1,int m2,int m3){
    name=n;
    rollNo=rn;
    marks1=m1,marks2=m2,marks3=m3;
}

int main()
{
student s1,s2("xyz",112),s3("zzz",113,78,87,90);

s1.displayDetails();
s2.displayDetails();
s3.displayDetails();
    return 0;
}