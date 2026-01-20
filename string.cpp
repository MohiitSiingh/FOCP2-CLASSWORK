#include<iostream>
int main(){
 std::string name;
 int n;
 std::cout<<"enter ";
std::cin>>n; //it will take space as enter
  std::cout<<"n is "<<n; 
 std::cin ignore();
 getline(std::cin,name);
 std::cout<<"\nname is "<<name;
 
    return 0;
}