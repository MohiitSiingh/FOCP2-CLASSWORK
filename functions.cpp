#include<iostream>

/*
using namespace std;
void welcome(void )
{
    cout<<"welcome";
}
void welcome(string name){
    cout<<"\nwelcome "<<name;
}
int main (){
welcome();
welcome("section A");
    return 0;
}   */
using namespace std;

void welcome(string name="Guest"){
    cout<<"\nwelcome "<<name;
}
int main (){
welcome();
welcome("Mohit");
welcome("Mohit Singh");
    return 0;
}