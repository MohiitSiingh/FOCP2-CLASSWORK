#include<iostream>
#include<string>
using namespace std;
class Rectangle {  
    private:
float length;
float width;
public:
//if want to end }; class like this you can only declare them in class reactangle and 
//use void Reactangle::displayResult in this way you can identify curly bracket in big code
void inputDimensions(){
    cout<<"\n Enter length and Enter width: ";
cin>>length>>width;
}
Rectangle();
Reactangle(int,int);
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
Rectangle::Rectangle(){
    cout<<"defualt";
}
Rectangle::Rectangle(int l,int w){
    length=l;
    width=w;
}
int main(){
Rectangle r1,r2(78,45);
   // r1.inputDimensions();
    r1.displayReasult();
      r2.displayReasult();
    return 0;
}