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
    float area()override{
        return (length*breadth);
    }
};
class circle : public shape{
    public:
    float radius;
    float area() override{
        return (3.14*radius*radius);
    }
};
int main(){
      Shape* s;   // base class pointer

    Rectangle r(2.3f, 3.3f);
    Circle c(5.0f);

    // Pointing to Rectangle
    s = &r;
    cout << "Area of Rectangle: " << s->area() << endl;

    // Pointing to Circle
    s = &c;
    cout << "Area of Circle: " << s->area() << endl;
}