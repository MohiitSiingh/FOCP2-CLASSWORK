#include<iostream>
using namespace std;
int sum(int,int,int=0,int=0,int=0);
int main(){
cout<<"sum is: "<<sum(12,78);
cout<<"\nsum is: "<<sum(12,78,850);
cout<<"\nsum is: "<<sum(12,778,85,32);
cout<<"\nsum is: "<<sum(12,778,85,32,9);
    return 0;
}
int sum(int s1,int s2,int s3,int s4,int s5){
int r = s1+s2+s3+s4+s5;
return r;
}