#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream chats;
    chats.open("chats",ios::app);
    chats<<"hi my name is varun and i share this to send the chats to ai for history";
    chats.close();

    ifstream chats1("./chats");
    
    char c;
    c=chats1.get();
    while(!chats1.eof()){
         cout<<c;
       c= chats1.get();
    } 
    chats1.close();
    cout<<chats1.is_open();
    return 0;
}