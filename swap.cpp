#include<iostream>
#include<string>
using namespace std;

class swap{ 
   swap(int a,int b){
    c=a;
    a=b;
    b=c;
   cout<<"a: "<<a<<"b: "<<b;
}
swap(float x,float y){
    c=x;
    x=y;
    y=c;
    cout<<"x: "<<x<<"y: "<<y;
};
} 
int main(){
int a=10;
int b=8;
float x =9.9,y=8.9;
//swap(10,8);
//cout<<"swap int values: "<<swap(10,8);
//cout<<"swap int values: "<<swap(10.23,8.45);
swap s1(a,b);
swap s2(x,y);
    return 0;
}
swap(a,b){
    c=a;
    a=b;
    b=c;
    return a,b;
}
swap(a,b){
    c=a;
    a=b;
    b=c;
    return a,b;
}