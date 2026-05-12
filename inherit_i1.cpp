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
class Manager:Public Employee{
    protected:
    float salary;
    Manager(salary){
        this->salary=salary;
    }
   
    float claculateSalary() override{
        return salary;
    }
};
class Worker:Public Employee{
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
    Employee* E;
    Manager M(120000.34f);
    Worker W(12000.32f);
    
    E = &M;
    cout<<"\n Manager salary is : "<<claculateSalary();
    E=&W;
    cout<<"\n Worker salary is : "<<claculateSalary();
}