#include<iostream>
using namespace std;
int sum(int,int);
float sum(float,float);
double sum(double,double);

int main(){
cout<<"\n"<<sum(5,5);
   //take input if not want to use f
    cout<<"\n"<<sum(5.5f,4.2f);//write f to take it as a float otherwise
    //  it will take it as a double so it will be amviguity error
    cout<<"\n"<<sum(5.5555,4.2222);
    return 0;
}
int sum(int a,int b){
return a+b;

}
double sum(double a,double b){
    return a+b;
}
float sum (float a, float b){
    return a+b;
}
