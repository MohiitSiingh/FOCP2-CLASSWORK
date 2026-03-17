#include<iostream>
#include<string>
using namespace std;
/* Q3. Write a C++ program to create a class Rectangle with length and breadth
 as data members.
Use a constructor to initialize the dimensions and calculate the area of the rectangle.*/
class Rectangle{
private:
float length;
float breadth;
public:
Rectangle(float l,float b){
    length = l;
    breadth = b;

}
float calculatearea(){
    return (l*w);
}
void displaydetails(){
    cout<<"area is: "<<calculatearea();
}
};
int main(){  
Rectangle r1(2,2);
r1.displaydetails();
r1.calculatearea();
return 0;
}
