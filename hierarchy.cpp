// Shape Hierarchy  
// Create a base class Shape with a virtual function area().
// Derive Circle and Rectangle classes, override area(), and
// calculate using base class pointers.
#include<iostream>
#include<string>
using namespace std;
class shape{
   
    public:
virtual float area(){
 
}
};
class rectangle: public shape{
    public:
    float length,breadth;
    float area(float length ,float breadth){
        return (length*breadth);
    }
};
class circle : public shape{
    public:
    float radius;
    float area(float radius){
        return (3.14*radius*radius);
    }
};
int main(){
    rectangle r(2.3f,3.3f);
   cout<<"Area of rectangle is: " r.area()<<endl;
   
}