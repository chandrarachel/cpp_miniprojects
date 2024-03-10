#include <iostream>
using namespace std;

int main() {
    char word[50], pattern[50];
    cout << "The word and chars are:" << endl;
    cin >> word;
    cin >> pattern;

    int word_len = 0;
    for (int i=0; word[i] != '\0'; i++) { // length of word // word[i]
        word_len++;
    }
    int pattern_len = 0;
    for (int i=0; pattern[i] != '\0'; i++) { // length of pattern // pattern[i]
        pattern_len++;
    }

    // check for existence
    int count = 0;
    // int exist = 1;
    bool notCont = false; // check if continuous
    int pos_last; // position of the last char in pattern that is found last in word

    for (int i=0; i<word_len; i++) {
        for (int j=0; j<pattern_len; j++) {
            if (pattern[j] == word[i]) {
                count++;
                notCont = false;
                pos_last = i;
                break;
            } else if (count != 0 && pattern[j] != word[i] && count != pattern_len) {
                notCont = true;
            } 
        }

        if (notCont) {
            count = 0;
        }
    }

    int pos = pos_last - (pattern_len - 1);

    if (count >= pattern_len) {
        cout << "The last position of " << pattern << " is: " << pos << endl;
    } else {
        cout << "The last position of " << pattern << " is: " << -1 << endl;
    }

    return 0;
}