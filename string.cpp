#include<iostream>
int main(){
 std::string name;
 int n;
 std::cout<<"enter ";
std::cin>>n; //it will take space as enter
  std::cout<<"n is \n"<<n;
 std::cin.ignore();//so after enetring value of 9 it should not take enter
 //  as value of string
 getline(std::cin,name);
  
 std::cout<<"\nname is "<<name;

    return 0;
}