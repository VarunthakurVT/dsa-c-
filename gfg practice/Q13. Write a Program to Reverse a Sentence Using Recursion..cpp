#include<iostream>
#include<string>

void printreverse(std::string s, int len ){
    int i{len-1};
 while(i>=0){
    if (s[i] != ' ') {
            std::cout << s[i];
        }
 i--;
  
 }
}
int main(){
   std::string str{"varun thakur"};
   int len =str.length();
 
printreverse(str,len);


}