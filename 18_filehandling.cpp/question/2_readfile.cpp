#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream file("./newfile.txt");
    char c=file.get();
    while(!file.eof()){
        cout<<c;
        c=file.get();
    }
    return 0;
}