#include<iostream>
#include<string>
using namespace std;
class Rectangle {  
    private:
float length;
float width;
public:
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
Rectangle r1;
    r1.inputDimensions();
    cout<<"\n Area is "<<r1.calculateArea();
    cout<<"\n perimeter is "<<r1.calculatePerimeter();
    return 0;
}