// 1. Create a Class: Name the class VideoProject.

// 2. Add Data Members (Make them public for now):

// title (string)

// durationInSeconds (int)

// 3. Write Two Constructors:

// A Default Constructor: If an object is created without any data, it should automatically set the title to "Untitled Project" and the durationInSeconds to 0.

// A Parameterized Constructor: It should accept a title and a duration as parameters. Bonus challenge: Give the parameters the exact same names as the class variables, and use the this-> pointer to assign them!

// 4. Write a Member Function:

// Create a void displayInfo() function that prints out the video's title and duration.

// 5. Test it in main():

// Create one object using the default constructor.

// Create a second object using the parameterized constructor (e.g., passing in "My Gameplay Video" and 600).

// Call displayInfo() on both objects. question 
#include<iostream>
using namespace std; 
class Videoproject{
    public:
    string title;
    int durationInSeconds;
//     Videoproject(){
//   title="Untitled Project";
//   durationInSeconds=0;
//     }
//     Videoproject(string t,int d){
//   this->title=t;
//   this->durationInSeconds=d;
//     } this is slow way
    Videoproject():title("Untitled Project"), durationInSeconds(0){}
    Videoproject(string t,int d){
  this->title=t;
  this->durationInSeconds=d;
    }
    void displayINfo(){
        cout<<"title= "<<title<<endl;
        cout<<"durationINSeconds= "<<durationInSeconds<<endl;
    }

}; 
int main(){
    Videoproject v1;
    v1.displayINfo();
    Videoproject v2("varun",200);
    v2.displayINfo();
    return 0;
}