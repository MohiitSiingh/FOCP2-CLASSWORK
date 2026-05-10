// Q.9 Electricity Billing System (Function Overloading) 
// An electricity board wants to design a billing system that calculates electricity
//  charges for 
// different types of consumers. The billing rules are: 
// • If only units consumed are provided → calculate bill at ₹5 per unit. 
// • If units + rate per unit are provided → calculate accordingly. 
// • If units + rate + fixed charge are provided → add fixed charge to total bill. 
// Requirements: 
// 1. Create a class ElectricityBill. 
// 2. Implement function overloading for a function named calculateBill(): 
// I. 
// calculateBill(int units) 
// II. 
// III. 
// calculateBill(int units, float rate) 
// calculateBill(int units, float rate, float fixedCharge) 
// 3. Display the calculated bill in each case. 
// 4. In main(): Call all three overloaded functions using different arguments. 
#include<iostream>
#include<string>
using namespace std;
class ElectricityBill{
    float total=0;
    public;
float calculateBill(int units){
total = units * 5;
return total;
}
total =0;
float calculateBill(int units, float rate){
    total = units * rate;
}total=0;
float calculateBill(int units, float rate, float fixedCharge){
    return ((units * rate )+ fixedCharge);
}
};
int main {
ElectricityBill EB;
cout<<"\nTotal bill when only units are provided: "<<EB.calculateBill(100);
cout<<"\nTotal bill when units and rate per unit are provided: "<<EB.calculateBill(100,8.5);
cout<<"\nTotal bill when units with rate and fixed charge are provided: "<<EB.calculateBill(100,9.5,234.56);
    return 0;
}