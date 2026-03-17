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
};
