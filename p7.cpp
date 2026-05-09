// Q7. A furniture showroom wants to develop a simple C++ program to manage details of 
// different types of tables. Each table can be purchased in different ways: 
// • Some customers buy a table by specifying only the price (default table) 
// • Some customers specify the material and price 
// • Some customers specify material, price, and number of legs (custom table) 
// Design a class Table that uses constructor overloading to handle all three cases: 
// 1. A default constructor that sets material as "Wood", price as 5000, and legs as 4 
// 2. A constructor that accepts material and price 
// 3. A constructor that accepts material, price, and number of legs 
// Create three objects using different constructors and display the details of each table.
#include<iostream>
#include<string>
using namespace std;
class Table{
string material;
float price;
int legs;
public:
Table(){
    material = "wood";
    price = 5000;
    legs=4;
}
Table(string mtrl,float p){
    material = mtrl;
    price = p;
    legs=4;
}
Table(string mtrl,float p ,int leg){
    material = mtrl;
    price =p;
    legs=leg;
}
void display(){
    cout<<"\ntable material: "<<material<<"\nPrice will be "<<price<<"\nno. of legs will be "<<legs;
}
} ;
int main(){
    Table T1,T2("wood",10000),T3("wood",2345,4);
    T1.display();
    T2.display();
    T3.display();
    return 0;
}