// Q3. Write a C++ program to create a class Rectangle
//  with length and breadth as data members. 
// Use a constructor to initialize the dimensions and
//  calculate the area of the rectangle.
#include<iostream>
#include<string>
using namespace std;
class Rectangle{
int length,breadth;
public:
Rectangle(int l , int b){
    length = l;
    breadth = b;
}
int calculateArea(){
    return (length*breadth);
}
};
int main(){
    Rectangle r1(13,4);
   cout<<"Area of this rectangle is "<< r1.calculateArea();
    return 0;
}