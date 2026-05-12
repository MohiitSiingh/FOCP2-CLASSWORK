// Employee Hierarchy  
// Base class Employee with virtual function calculateSalary().
//  Derive Manager and Worker classes, override salary calculation differently, 
//  and display salaries.
#include<iostream>
#include<string>
using namespace std;
class Employee{
    protected:
    float claculateSalary(){
        Cout<<"Need to specify the post: \n";
    }
};
class Manager:protected Employee{
    
}