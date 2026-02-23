#include<iostream>
#include<string>
using namespace std;
class solution{ 
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
int calculateTotal(){//getter
    return (marks1+marks2+marks3);
}
void displayDetails(){
    cout<<"\n Name : "<<name<<"\n Rollno : "<<rollNo;
    cout<<"\n Marks1: "<<marks1<<"\n Marks2 : "<<marks2<<"\n Marks3 : "<<marks3;
    cout<<"\n Total = "<<calculateTotal();
}
};
int main()
{
student s1;
s1.inputDetails();
s1.displayDetails();
    return 0;
}