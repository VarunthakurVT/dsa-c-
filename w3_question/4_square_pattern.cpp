#include <iostream>
using namespace std;

int main(){
    int width, height;
    cin >> width >> height;
    for(int i=1;i<=height;i++){
      for(int j=1;j<=width;j++){
        if(i==1||i==height){
      cout<<'*';
        }else{
          if(j==1||j==width){
          cout<<'*';
          }
          else{
          for(int space=0;space<3;space++){
            cout<<' ';
          }
        }
         }
        }
      cout<<endl;
    }
    // Print the rectangle border
    return 0;
}
