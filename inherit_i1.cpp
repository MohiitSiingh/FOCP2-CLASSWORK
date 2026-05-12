// Employee Hierarchy  
// Base class Employee with virtual function calculateSalary().
//  Derive Manager and Worker classes, override salary calculation differently, 
//  and display salaries.
#include<iostream>
#include<string>
using namespace std;
class Employee{
    protected:
   virtual float claculateSalary(){
        Cout<<"Need to specify the post: \n";
    }
};
class Manager:protected Employee{
    protected:
    float salary;
    Manager(Salary){
        this->salary=salary;
    }
   
    float claculateSalary() override{
        return salary;
    }
};
class Worker:protected Employee{
    protected:
    float salary;
    Worker(Salary){
        this->salary=salary;
    }
   
    float claculateSalary() override{
        return salary;
    }
};
int main(){
    Employee *E;
    
}