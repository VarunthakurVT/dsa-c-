#include<iostream>
#include<vector> 
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
     vec.push_back(3);
    // vec.push_back(4);
    cout<<"capacity of the vector "<<vec.capacity()<<endl; //this is the capacity
    cout<<"size of the vector "<<vec.size(); //this is the size
    return 0;
}