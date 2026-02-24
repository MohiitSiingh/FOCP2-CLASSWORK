#include<iostream>
#include<string>
using namespace std;
class Candy{
    //private:
string color;
int points;
public:
void setCandy(string c,int p);
void displayCandy();
void Candy::loose
};
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