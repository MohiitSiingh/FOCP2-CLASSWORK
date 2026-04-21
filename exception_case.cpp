#include<iostream>
#include<exception>
using namespace std;

int main(){
int a =10,b=0;

try{
    if(b ==0){
    throw "division by zero error!";
    }
cout<< "Result : "<<a / b << endl;

}
catch(const char* msg){
    cout << "Exception caught: " << msg << endl;
}

cout << "Program continues .."<< endl'
return 0;
}