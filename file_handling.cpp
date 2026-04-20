#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
fstream fout("data.txt",ios::out);
fout << "This is file handling in c++\n";
fout<< "this is file handling in c++ where ios::out truncates the file";
 fout.close();
cout<< "data written successfully\n";
ifstream fin("./data.txt");
string line;
int count_line =0;
// getline(fin,line);//use while to display the text of whole file
// cout<<line;
while(getline(fin,line)){
    cout << line << endl;
    count_line++;
}

cout<< count_line<<endl;
int count_word =0;
while(fin>>line){
    cout << line << endl;
    count_word++;
}
cout<<count_word;
fin.close();
    return 0;
}
