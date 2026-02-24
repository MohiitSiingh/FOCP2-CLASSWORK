#include<iostream>
#include<string>
using namespace std;
class Candy{
    //private:
string color;
int points;
public:
Candy();
Candy(string ,int);
void setCandy(string c,int p);
void displayCandy();
void loose_point(int p);
void::gain_point(int p);
};
Candy::candy(){
    
}
void Candy::loose_point(int p){
    points=points-p;
}
void::gain_point(int p){
    points = points + p;
}
void Candy::setCandy(string c,int p){
    color=c;
    points=p;
}
void Candy::displayCandy(){
    cout<<"\n Color of the candy:"<<color;
    cout<<"\n your points are : " <<points;

}
int main(){
    Candy c1,c2;
    c1.setCandy("blue",34);
    c1.displayCandy();
 
}