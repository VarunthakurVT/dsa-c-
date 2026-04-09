#include<iostream>
#include<fstream>
using namespace std;
int main(){

ifstream file("./this_file_is_created_by_fstream");
    char c;
    c=file.get();
    while(!file.eof()){
        cout<<c;
       c= file.get();
    }
    file.close();
    return 0;
}