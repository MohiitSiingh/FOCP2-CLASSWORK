// Q.8 Write a C++ program to demonstrate function overloading by creating multiple functions 
// named volume: 
// • One function to calculate the volume of a cube (side) 
// • One function to calculate the volume of a cuboid (length, breadth, height) 
// • One function to calculate the volume of a cylinder (radius, height) 
// Call all the overloaded volume functions in the main() function and display the calculated 
// volumes.
#include<iostream>
using namespace std;
class volume(){
    float length,breadth,height,radius;
    public:
    int volume(float l ){
        return (l*l*l);
    }
     int volume(float l,float breadth,float height ){
        return ();
    }
     int volume(int l ){
        return (l*l*l);
    }
}