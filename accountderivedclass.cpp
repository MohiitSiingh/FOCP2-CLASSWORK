#include<iostream>
using namespace std;
/* Create a class Account with account number and balance.
 Add a function displayAccount().
  Derive a class SavingsAccount that includes interest rate and a
   function calculateInterest().
   Demonstrate usage of both classes. */
   class Account{
int acc_num;
float balance;  //  use protected if there is not getter and setter
public:
int get_accnum(){
    return acc_num;
}
void set_accnum(int acc_num)
    {this->acc_num = acc_num;

}
int getbalance(){
    return balance;
}
void setbalance(float balance){
    this->balance = balance;
}
void displayAccount(){
    cout<<"account number ="<<acc_num;
    cout<<"\nbalance ="<<balance;
}  
Account(){
    acc_num = 1;
    balance = 0;
}
Account(int a,float b){
    acc_num = a;
    balance = b;
}
 };
 class savingsaccount : public Account {
float interest;
public:
int getInterest(){
    return interest;
}
void setInterst(float interest){
    this->interest= interest;
}
void calculateInterest(){
    cout<<"Interest rate :"<<getInterest()<<"%"<<endl;
     cout<<"Interest per month :"<<(getInterest()/100)*getbalance()<<endl;
}
savingsaccount() : Account(){
    cout<<"\nsavings account created \n";
    interest = 0;
}
savingsaccount(int a , float b , float i) : Account(a,b){
    cout<<"\nsavings account has ";
    interest = i;
}
void sav_displayAccount(){
    displayAccount();
    cout<<"\nInterest :"<<getInterest();
    cout<<endl;
}
 };
 int main(){
    // Account A,B(121212,222.2);
    // A.displayAccount();
    // B.displayAccount();
    savingsaccount s1;
    s1.sav_displayAccount();
    
    savingsaccount s2(121212,222.2,5);
    s2.sav_displayAccount();
 }