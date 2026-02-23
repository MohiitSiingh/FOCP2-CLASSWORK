#include<iostream>
#include<string>
using namespace std;
class Rectangle {  
float length;
float width;

void inputDimensions(){
    cout<<"\n Enter length and Enter width: ";
cin>>length>>width;
}
float calculateArea(){
    return (length*width);
}
float calculatePerimeter(){
    return (2*(length+width));
}
};
int main(){
    
}