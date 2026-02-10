/*#include<iostream>
using namespace std;
//void swap (int &r1,int &r2);
int swap(int a,int b);
int main(){
    int  a = 23,b=9;
   // int *x=&a;
   // int &r = a;
  //  int c = swap(&a,&b);

    //cout<<a<<b<<"\n";
    cout<<"v is "<<swap(a,b);
    cout<<"values after swap"<<a<<"b is:"<<b;
    return 0;
}
int swap(int a,int b){
    a=a+b;int main(){
    int  a = 23,b=9;
   // int *x=&a;
   // int &r = a;
  //  int c = swap(&a,&b);

    //cout<<a<<b<<"\n";
    cout<<"v is "<<swap(a,b);
    cout<<"values after swap"<<a<<"b is:"<<b;
    return 0;
}
int swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    return b;
  //  cout<<"values of a and b after swap: "<<a<<"\n"<<b;
}
    b=a-b;
    a=a-b;
    return b;
  //  cout<<"values of a and b after swap: "<<a<<"\n"<<b;
}*/
#include <iostream>
using namespace std;

void swap(int &a, int &b) ;

int main() {
    int a = 23, b = 9;
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swap(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
void swap(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}//pass by value pass by reference pass by address or pointer