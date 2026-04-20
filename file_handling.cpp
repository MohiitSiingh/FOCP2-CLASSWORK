#include<iostream>
#include<fstream>
using namespace std;

int main(){
fstream fout("data.txt",ios::out);
fout << "This is file handling in c++\n";
fout<< "this is file handling in c++ where ios::out truncates the file";
fout.close();
cout<< "data written successfully";
    return 0;
}
