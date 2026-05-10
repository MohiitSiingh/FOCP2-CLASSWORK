// Q12.A mobile store wants to maintain information about different mobile phones.
//  Sometimes the store knows only the brand, sometimes it knows brand and price, and
//  sometimes it knows brand, price, and storage capacity. 
// Problem Statement 
// Design a class Mobile that stores the following information: 
// • Brand 
// • Price 
// • Storage (in GB) 
// Requirements 
// 1. Implement constructor overloading with the following constructors: 
// • A constructor that initializes only the brand. 
// • A constructor that initializes brand and price. 
// • A constructor that initializes brand, price, and storage. 
// 2. Write a display function to print the mobile details. 
// 3. Create three objects using different constructors. 
// 4. Display the details of each mobile. 
#include<iostream>
#include<string>
using namespace std;
class Mobile{
    string Brand;
    float price;
    int storage;
    public:
    Mobile(string Brand){
        this->Brand = Brand;
        price = 0;
        storage = 0;
    }
    Mobile(string Brand,float price){
        this->Brand = Brand;
        this->price = price;
        storage = 0;
    }
    Mobile(string Brand,float price, int strg){
        this->Brand = Brand;
        this->price=price;
        storage=strg;
    }
    void display(){
        cout<<"\nBrand = "<<Brand<<"\nPrice= "<<price<<"\nstroage= "<<storage<<"GB"<<endl;
    }
};
int main(){
    Mobile M1("Samsung"),M2("Nokia",12345),M3("Apple",54321,1024);
    M1.display();
    M2.display();
    M3.display();
}