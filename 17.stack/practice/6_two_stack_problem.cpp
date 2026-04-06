#include <iostream> 
class TwoStack {

public: 
 int size{};
 int *arr;
 int TOP1{},TOP2{};

    // Initialize TwoStack.
    TwoStack(int s) {
     this->size=s;
     arr=new int [s];
     TOP1=-1;
     TOP2=s;
       
    }
    
    // Push in stack 1.
    void push1(int num) {
      if(TOP2-TOP1>1){
          TOP1++;
          arr[TOP1]=num;
      }

      }

    // Push in stack 2.
    void push2(int num) {
         if(TOP2-TOP1>1){
          TOP2--;
          arr[TOP2]=num;

      }
        // Write your code here.
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(TOP1>=0){
        
        
        int ans=arr[TOP1];
        TOP1--;
        return ans;
        }else{
            return -1;
        }
        // Write your code here.
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(TOP2<size){
        int ans=arr[TOP2];
          TOP2++;
        return ans;
        }else{
            return -1;
        }
        // Write your code here.
    }
};
