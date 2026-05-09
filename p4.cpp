// Q4. Create a class Employee with data members: emp_id and salary.
//  Initialize the values using 
// a parameterized constructor and display the employee information. 
#include<iostream>
#include<string>
using namespace std;
class Employee{
    string emp_id;
    float salary;
    public :
    Employee(string id , float sal){
        emp_id = id;
        salary = sal;
    }
    void displayDetails(){
        cout<<"employee id : "<<emp_id<<"\nSalary = "<<salary;
    }
};
int main(){
Employee E("E121",10000);
E.displayDetails();
}