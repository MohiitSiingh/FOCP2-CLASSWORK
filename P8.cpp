// Q.8 Write a C++ program to demonstrate function overloading by creating multiple functions 
// named volume: 
// • One function to calculate the volume of a cube (side) 
// • One function to calculate the volume of a cuboid (length, breadth, height) 
// • One function to calculate the volume of a cylinder (radius, height) 
// Call all the overloaded volume functions in the main() function and display the calculated 
// volumes.
#include<iostream>
using namespace std;
class volume{
    float length,breadth,height,radius;
    public:
    int volume(float l ){
        return (l*l*l);
    }
     int volume(float length,float breadth,float height ){
        return (length*breadth*height);
    }
     int volume(float radius,float height ){
        return (radius*height);
    }
    void display(){
        cout<<"Volume of the cube or cuboid or cylinder = "<<volume();
    }
};
int main(){
    volume v1;
    v1.volume(2);
    v1.volume (2,3,4);
    v1.volume(2.12,4);
    v1.display();
}