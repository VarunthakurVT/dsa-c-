#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main(){
vector<int>arr(5);
cout<<"enter the number";
for(int i=0;i<5;i++){
cin>>arr[i];
}
ofstream file("./this_file_is_created_by_fstream",ios::app);
for(int i=0;i<5;i++){
    file<<arr[i]<<" ";
}
file.close();
return 0;
}