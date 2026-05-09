// Q5. Define a class BankAccount with account number and balance.
//  Use a constructor to set 
// the initial balance and write a function to display account details. 
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
string acc_num;
float balance;
public:
BankAccount(string acc,float bal){
    acc_num = acc;
    balance = bal;
}
void Display(){
    cout<<"account number: "<<acc_num<<"\nBalance: "<<balance;
}
};
int main(){
    BankAccount b("XS123",123456789);
    b.Display();
    return 0;
}