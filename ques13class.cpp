/*Q.13. A computer shop wants to store information about laptops in its inventory.
 Sometimes the shop knows only the brand, sometimes brand and RAM, and
 sometimes brand, RAM,and price.
Requirements
1. Create a class Laptop with the following data members:
• Brand
• RAM
• Price
2. Implement function overloading using a function called setDetails():
• setDetails(string brand):sets only the brand
• setDetails(string brand, int ram): sets brand and RAM
• setDetails(string brand, int ram, int price): sets brand, RAM, and price
3. Create another function display() to show the laptop details.
4. In the main() function:
• Create three laptop objects.
• Call different overloaded setDetails() functions for each object.
• Display the laptop information*/
#include<iostream>
#include<string>
using namespace std;
class Laptop{
    private:
int price;
int ram;
string brand;
public:
void setdetails(string brand);
void setdetails(string brand,int ram);
void setdetails(string brand,int ram,int price);
};