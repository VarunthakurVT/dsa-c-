#include<iostream>
#include<fstream> //this is for creating the files on cpp 
using namespace std ;
int main(){
    //ofstream createfile; //this is like creating a object 
    //createfile.open("this_file_created_by_fstream");//file create and then open we can do like this 
    ofstream createfile("this_file_is_created_by_fstream",ios::app); //ios app is used to like append the data after these stuff 
    createfile<<"hello  ";  //in this we write all of stuff
    createfile<<"new user login";
    createfile.close();  //this is best practice to close the file 
    

    return 0;

}