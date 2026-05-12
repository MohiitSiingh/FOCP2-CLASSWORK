// Employee Hierarchy  
// Base class Employee with virtual function calculateSalary().
//  Derive Manager and Worker classes, override salary calculation differently, 
//  and display salaries.
#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
   virtual float calculateSalary(){
        cout<<"Need to specify the post: \n";
        return 0;
    }
};
class Manager:public Employee{
    public:
    float salary;
    Manager(float S){
        salary = S;
    }
   
    float calculateSalary() override{
        return salary;
    }
};
class Worker:public Employee{
    public:
   
    Worker( float S){
        salary = S;
    }
   
    float calculateSalary() override{
        return salary;
    }
};
int main(){
    Employee* E;
    Manager M(120000.34f);
    Worker W(12000.32f);
    
    E = &M;
    cout<<"\n Manager salary is : "<<E->calculateSalary();
    E=&W;
    cout<<"\n Worker salary is : "<<E->calculateSalary();
}