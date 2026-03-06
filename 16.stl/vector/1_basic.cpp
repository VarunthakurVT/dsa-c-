#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(5);
    cout<<vec.size()<<endl;//3
    cout<<vec.capacity();//4
    //to print all elements
    for(int val: vec){
        cout<<val<<endl;
    }
    cout<<vec.at(0)<<endl;//this is used to find the value by its index
    cout<<vec[3]<<endl; //this is same
//to get front and last element int the vec. we use front and back
cout<<vec.front()<<endl;
cout<<vec.back()<<endl;
}
