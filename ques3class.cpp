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
Rectangle();
Rectangle(float ,float );
float calculatearea(){
    return (length*breadth);
}
void displaydetails(){
    cout<<"area is: "<<calculatearea();
}
};
Rectangle::Rectangle(){
    cout<<"default parameter was called";
    length=0;
    breadth=0;
}
Rectangle::Rectangle(float l,float b){
    length=l;
    breadth=b;
}
int main(){  
Rectangle r1(2,2);
r1.displaydetails();
r1.calculatearea();
return 0;
}
