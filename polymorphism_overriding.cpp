#include<iostream>
using namespace std;
class shape{
    public:
    shape(){
        cout<<"\n shape default const called";}
        virtual void area()=0;
        // {
        //     cout<<"\n no dim no area";
        // }
void display(){
    cout <<"\n we are 2d shapes";
}
    
};
class Rectangle:public shape{
    int length;int width;
    public:
    Rectangle(int l = 5, int w = 10 ): length(l),width(w){
        cout<<"\n Rectangle object created";
    }
    void area(){
        cout<<"\n area = "<<length*width;
    }
};
int main(){
    shape *s1;
    Rectangle r2(50,45);
    s1.area();
    r2.area();
    r2.shape::area();
    s1.display();
    r2.display();
    return 0;
}