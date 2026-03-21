// variables is a container to store data
#include<iostream>
using namespace std;
int main(){
    
    int a=34; //this is a variable and int is a data type
    cout<<a<<'\n' ;// this is used to print a value  use only ''single quortes
    cout<<a<<"\n";// if we do like this it print a not the value of a it takes as string
    cout<<sizeof(a),"\n"; //this is used to find the size of the variable

    //according to big tech  to define multiple variable best way 
    int b=34;
    int c =56; 
    //not like this 
    int d=34,g=45;
    
    //if you want to store empty variable at the starting do this 
    //basic way 
    int f; //this stores the garbage value in this 
    cout<<f<<endl;
    
    
    int h{}; //this is the best way to define empty variable like this 
    cout<<h<<endl;
    //best way to define the variable is a{34}
    int n{334};
    cout<<n;
    return 0;
}

//\n is consider as a good practice to make the text in next line endl is the slow way and the endl is mainly used for debugging