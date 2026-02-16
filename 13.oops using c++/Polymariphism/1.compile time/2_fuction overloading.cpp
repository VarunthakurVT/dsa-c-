#include<iostream>
#include<string>
using namespace std;
class Print{
    public:
    void show(int x){
        cout<<"number"<<x<<endl;
    }
    void show(char x){
        cout<<"char"<<x<<endl;
    }
    void show(string x){
        cout<<"string"<<x<<endl;
    }

    
};
int main(){
    Print p1;
    p1.show(323);
    p1.show("A");
    p1.show("varun");
    return 0;

}