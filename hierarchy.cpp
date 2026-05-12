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
    rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    float area()override{
        return (length*breadth);
    }
};
class circle : public shape{
    public:
    float radius;
      circle(float r) {
        radius = r;
    }
    float area() override{
        return (3.14*radius*radius);
    }
};
int main(){
      shape* s;   // base class pointer

    rectangle r(2.3f, 3.3f);
    circle c(5.0f);

    // Pointing to Rectangle
    s = &r;
    cout << "Area of Rectangle: " << s->area() << endl;

    // Pointing to Circle
    s = &c;
    cout << "Area of Circle: " << s->area() << endl;
}