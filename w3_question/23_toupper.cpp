#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string word;
    getline(cin, word);
    int len=word.size();
    // Print uppercase and length
    for(char &c:word){
      c=toupper(c);
    }
   cout<<word<<endl;
  cout<<"Length: "<<len;
    return 0;
}
