#include<iostream>
#include<string>
using namespace std;
/* Q2. Design a class Car that has attributes: brand and price.
 Write a constructor to assign values 
and create two objects to display the details of both cars.*/
class Car{
private:
string brand ;
double price;
public:
Car(b,p){
brand=b;
price=p;
}
void displaydetails(){
    cout<<"\nBrand is : "<<brand<<"\nprice is : "<<price<<endl;
}

};
int main(){
    Car c1("toyota",50);
    c1.displaydetails();
    return 0;
}