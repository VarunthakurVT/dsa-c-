#include <iostream>
using namespace std;

int main(){
    int n=4;
    //top
    for (int i=0;i<n;i++){
    //spaces
    for (int s=0;s<n-i-1;s++){
    cout<<" ";
}
//star1
  cout<<"*";
  if(i!=0){
    //spaces 2
    for (int sp=0;sp<2*i-1;sp++)
    {
      cout<<" ";
    }
    //star 2
    cout<<"*";
  }
  
  
    cout<<endl;
    }
    //bottom 
    
    for(int i=0;i<n-1;i++){
      //spaces
      for(int sp=0;sp<i+1;sp++){
        cout<<" ";
      }
      cout<<"*";

    if(i !=n-2){
      for(int sp1=0;sp1<2*(n-i)-5;sp1++){
        cout<<" ";
      }
      cout<<"*";
    }
  cout <<endl;
    }
  
  return 0;
}

