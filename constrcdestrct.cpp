#include<iostream>
#include<string>
using namespace std;
class SmartLight{
string brand;
int brightness;
bool isOn;
public:
SmartLight(){
    brand = "DefaultBrand\n";
    brightness = 50;
    isOn = false;
    cout<<"Default Constructor\n";

}
SmartLight(string b,int br,bool state){
    brand = b;
    brightness = br;
    isOn = state;
    cout<<"parameterized Constructor called\n";

}
~SmartLight(){
    cout<<"Object Destroyed ( "<<brand<<")\n"
}
void turnOn(){
isOn = true;
cout<<brand<<"Light turned on"
}
void turnOff(){
isOn = false;
cout<<brand<<"Light turned off\n";
}
void increaseBrightness(){
    if(brightness<=90){
        brightness+=10;cout<<"brightness : "<<brightness<<"\n";
        
    }
}
void decreaseBrightness(){
    if(brightness>=10){
        brightness-=10;cout<<"brightness : "<<brightness<<"\n";
        
    }
}
void displayStatus(){
    
}
};