// Transport System  
// Base class Vehicle with virtual function fuelEfficiency().
//  Derive Car and Bike classes, override efficiency calculation, and
//  display results using base class pointer
#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    public:
    virtual float fuelEfficiency(){
cout<<"\ngenric vehicle: has no fuel efficiency";
return 0;
    }
};
class Car:public Vehicle{
    public:
    float fuel_used,km_run;
   
    Car(float fu,float km){
        fuel_used=fu;
        km_run=km;
    }
        float fuelEfficiency() override{
            Vehicle::fuelEfficiency();
            return km_run/fuel_used;
        }
};
class Bike:public Vehicle{
    public:
    float fuel_used,km_run;
    
    Bike(float fu,float km){
        fuel_used=fu;
        km_run=km;
    }
        float fuelEfficiency() override{
            // Vehicle::fuelEfficiency();
            return km_run/fuel_used;
        }
};
int main(){
    Vehicle *V;
    // V.fuelEfficiency();
    Car C(50.5f,560.7f);
    Bike B(8.82f,280.9f);
    V = &C;
    cout<<"\nfuel efficiency of the car is: "<<V->fuelEfficiency();
    V = &B;
    cout<<"\nfuel efficiency of the bike is: "<<V->fuelEfficiency();
    return 0;
}