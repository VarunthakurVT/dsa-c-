#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
using namespace std;

int main() {
    string shape;
    getline(cin, shape);
 float area=0.0;
    // Read measurements and calculate area
 	if(shape=="rectangle"){
    float h,w;
    cin>>h;
    cin>>w;
    area=h*w;
    cout<<"Area: "<< fixed << setprecision(2) <<(float)area;
  } else if(shape=="triangle"){
    float b,h;
    cin>>b;
     cin>>h;
     area=b*h/2;
     cout<<"Area: "<< fixed << setprecision(2) <<(float)area;
            }
      else if(shape=="circle"){
        
        float r;
        cin>>r;
        area=M_PI*r*r;
        cout<<"Area: "<< fixed << setprecision(2) <<(float)area;
      }
  
    // Print the area
    return 0;
}
