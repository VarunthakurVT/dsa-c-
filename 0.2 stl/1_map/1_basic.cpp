#include<iostream>
#include<map>
using namespace std ;
int main(){
    map<int,int>mymap;
    mymap[1]=1;
    mymap.insert({2, 2});
    mymap.erase(1);
    for(auto number:mymap){
        cout<<number.first<<number.second;
    }

}