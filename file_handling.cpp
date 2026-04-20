#include<iostream>
#include<fstream>
using namespace std;

int main(){
ofstream fout("data.txt");
fout << "This is file handling in c++\n";
fout<< "the syntax is different";
fout.close();
cout<< "data written successfully";
    return 0;
}
