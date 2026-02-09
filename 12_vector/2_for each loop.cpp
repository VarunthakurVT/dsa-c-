#include<iostream>
#include<vector>
using namespace std;
//for each loop is just like a simple loop but it contain the index value it is used for range jof value
int main(){
    vector<int>vec={1,2,3,4,5,6,7};
    for(int i:vec){  //this is for each loop
        cout<<i<<endl;
    }
}