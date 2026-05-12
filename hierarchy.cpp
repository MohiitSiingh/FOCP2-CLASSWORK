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
 cout<<"shape has no area\n";
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
    shape s;
    s.area();
    rectangle r;
   cout<<"Area of rectangle is: " <<r.area(2.3f,3.3f)<<endl;
   circle c;
   cout<<"area of circle:"<<c.area(5.0f);
}