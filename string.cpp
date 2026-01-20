#include<iostream>
int main(){
 std::string name;
 std::cout<<"enter ";
std::cin>>name; //it will take space as enter
 // std::cout<<"name is "<<name; 
 std::cin ignore();
 getline(std::cin,name);
 std::cout<<"name is "<<name;
 
    return 0;
}