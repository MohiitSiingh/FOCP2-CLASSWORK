#include <iostream>
#include <string>
using namespace std;
void swap(int , int );
void swap(float,float);
int main(){
int a =10,b=8;
float x = 3.3,y=7.3;
cout<<"before swap : "<<a<<b;
swap(10,8);
cout<<"before swap : "<<x<<y;
swap(3.3f,7.3f);
return 0;
}
swap( a, b){
    int temp = a;
    a=b;
    b=temp;
    cout<<"after swap: "<<a<<b;

}
swap(x, y){
    float temp = x;
    x=y;
    y=temp;
    cout<<"after swap: "<<x<<y;
}