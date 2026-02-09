#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5,6};
     cout<<"vector size "<<vec.size()<<endl; //vector size is used to determine the size of the vector
     vec.push_back(7);
     cout<<"after push back "<<vec.size()<<endl; //vector push back is used to add element at the last of the vector
     vec.pop_back();
      cout<<"after pop back "<<vec.size()<<endl; //vector pop back is used to delete the last element 
       cout<<"first value in the vector "<<vec.front()<<endl; //this give the first value in the vector 
       cout<<"last value in the vector "<<vec.back()<<endl; //this give the last value in the vector
       cout<<"value at index 2 :"<<vec.at(2)<<endl;//this give the index value in the vector
     return 0;

}