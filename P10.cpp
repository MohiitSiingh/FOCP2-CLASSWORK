// Q.10 Online Shopping Cart 
// An e-commerce website wants to represent items in a user's shopping cart. 
// Each item should contain: 
// • Product name 
// • Price 
// • Quantity 
// Questions 
// 1. Create a class called Product. 
// 2. Use a constructor to initialize product details. 
// 3. Write a function to calculate total cost = price × quantity. 
// 4. Create two objects for different products. 
// 5. When the program ends, the destructor should display a message indicating that the 
// product is removed from memory.
#include<iostream>
#include<string>
using namespace std;
class Product{
string name;
float price,total=0;
int quantity;
    public:
    Product(string n , float p , int q){
        name = n;
        price = p;
        quantity = q;
    }
 float calculateTotal(){
    cout<<"\nName of the product is: "<<name<<"\nPrice: "<<price<<"\nQuantity: "<<quantity;
    return (total = (price * quantity));
 }
};
int main(){
    Product P("Bottle",234.3f,3);
    cout<<"\nTotal bill of your added item is: "<<P.calculateTotal();
}