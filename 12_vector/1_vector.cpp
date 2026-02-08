//vetcor is just like a array 
//#include<vector> is used to make vector 
//there is the stl called standard template library it contain vector que stack and set
//in array size is fixed vector can resize
#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector<int>vec; // we can make like this and 
    vector<int>vec={1,2,3};
     cout<<vec[2]<<endl;
     vector<int>hi(3,0);
     cout<<hi[1];
    return 0;
}