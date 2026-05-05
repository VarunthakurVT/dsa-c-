#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);
	 int count=1;
    // Count and print the number of words
    for(int i=0;i<sentence.length();i++){
      if(sentence[i]==' '){
        count++;
      }else{
        continue;
    }
    }
  cout<<count<<" words";
    return 0;
}
