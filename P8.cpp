// Q.8 Write a C++ program to demonstrate function overloading by creating multiple functions 
// named volume: 
// • One function to calculate the volume of a cube (side) 
// • One function to calculate the volume of a cuboid (length, breadth, height) 
// • One function to calculate the volume of a cylinder (radius, height) 
// Call all the overloaded volume functions in the main() function and display the calculated 
// volumes.
#include<iostream>
using namespace std;
class Volume{
    float length,breadth,height,radius;
    public:
    float volume(float l ){
        return (l*l*l);
    }
     float volume(float length,float breadth,float height ){
        return (length*breadth*height);
    }
     float volume(float radius,float height ){
        return (radius*height);
    }
    void display(){
        cout<<"Volume of the cube or cuboid or cylinder = "<<volume();
    }
};
int main(){
    Volume v1;
    // volume(2);
    // volume (2,3,4);
   v1.volume(2.12f,4.0f);
    v1.display();
}