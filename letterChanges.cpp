#include <iostream>
using namespace std;

string LetterChanges(string str) { 
  for (int i=0; i<str.length(); ++i) {
    if (isalpha(str[i]))
      str[i] = str[i]+1;
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      str[i] = toupper(str[i]);
  }
  return str;
}

int main() { 
  string myStr;
  getline (cin,myStr);
  cout << LetterChanges(myStr);
  return 0;
}           