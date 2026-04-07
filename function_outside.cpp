#include<iostream>
using namespace std;
class Rectangle{
int length;
int width;
public:
Rectangle(){
    length = 0; width =0;
}
Rectangle(int l , int w){
    length = l;width = w;
}
void display(){
    cout<<"\n lenght = "<<length;
    cout<<"\n width = "<<width;
}
friend void area (Rectangle obj);
};
void area (Rectangle obj){
    int area = obj.length*obj.width;
    cout<<"\n Area = "<<area; 
}
int main(){
    Rectangle r1,r2(10,15);
    r1.display();
    r2.display();
    area (r2);
    return 0;
}//operator overloading concept