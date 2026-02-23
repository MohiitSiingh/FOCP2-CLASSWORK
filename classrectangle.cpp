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
void displayReasult(){
cout<<"\n Area is "<<calculateArea();
    cout<<"\n perimeter is "<<calculatePerimeter();
}
};
int main(){
Rectangle r1;
    r1.inputDimensions();
    r1.displayReasult();
    return 0;
}