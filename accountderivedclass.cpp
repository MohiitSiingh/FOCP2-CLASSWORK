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

 };