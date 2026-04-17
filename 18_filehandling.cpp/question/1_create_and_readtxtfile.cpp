#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream file("newfile.txt",ios::app);
file<<"hi my name is varun";
file.close();
} 
