#include <iostream>
#include <sstream>
using namespace std;

// receives a nonempty string and returns the longest LongestWord
// that appears on the string.
string LongestWord(string sen) {
    istringstream iss (sen);
    string longest;
    int counter, len_longest = 0;
    for (string word; iss>>word;) {
        counter = 0;
        for (int i=0; i<word.length(); ++i) {
            if (isalnum(word[i]))
                ++counter;
        }
        if (counter > len_longest) {
            len_longest = counter;
            longest = word;
        }
    }
    return longest;
}

int main() {
    string input;
    getline(cin, input);
    cout << LongestWord(input) << endl;
    return 0;
}