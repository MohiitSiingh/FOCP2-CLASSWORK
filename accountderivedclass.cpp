#include<iostream>
usinf namespace std;
/* Create a class Account with account number and balance.
 Add a function displayAccount().
  Derive a class SavingsAccount that includes interest rate and a
   function calculateInterest().
   Demonstrate usage of both classes. */
   class Account{
int acc_num;
float balance;
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
 Class Account : public savingsaccount{
float interest;
public:
int getInterest(){
    return interest;
}
void setInterst(float interest){
    this->interest= interest;
}
void calculateInterest(){
    
}
 };
 int main(){
    Account A,B(121212,222.2);
    A.displayAccount();
    B.displayAccount();
 }