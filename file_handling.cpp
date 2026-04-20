#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
fstream fout("data.txt",ios::out);
fout << "This is file handling in c++\n";
fout<< "this is file handling in c++ where ios::out truncates the file";
 
cout<< "data written successfully";
    return 0;
}
