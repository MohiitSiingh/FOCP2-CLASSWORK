// Q2. Design a class Car that has attributes: brand and price. 
// Write a constructor to assign values 
// and create two objects to display the details of both cars. 
#include<iostream>
#include<string>
using namespace std;
class Car{
string brand;
float price;
public:
Car(){
brand = "maruti";
price = 150000;

}
Car(string b,float p) {
    brand = b;
    price = p;
}
void display(){
    cout<<"\nBrand is : "<<brand<<"\nprice is: "<<price;
}
};
int main(){
    Car c1,c2("Toyota",200000);
    c1.display();
    c2.display();
}