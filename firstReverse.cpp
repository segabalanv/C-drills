#include <iostream>
using namespace std;

string FirstReverse(string str) { 
  char temp;
  int last_pos = str.length()-1;
  for (int i=0; i<str.length()/2; ++i) {
    temp = str[i];
    str[i] = str[last_pos - i];
    str[last_pos - i] = temp; 
  }
  return str; 
            
}

int main() { 
  
  string str;
  getline(cin, str);
  cout << FirstReverse(str);
  return 0;
}