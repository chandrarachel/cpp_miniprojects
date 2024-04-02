#include <cstring>
#include <iostream>
using namespace std;

int stringCompare() { // masing" kasih data type
    string s1;
    string s2;
    cout << "Enter the first string:" << endl;
    cin >> s1;
    
    cout << "Enter the second string:" << endl;
    cin >> s2;


    int res = s1.compare(s2);
    int len1 = s1.length();
    int len2 = s2.length();
    int finalRes;

    if (res > 0) { // s1 > s2
        finalRes = 1;
    } else if (res < 0) { // s1 < s2
        finalRes = -1;
    } else if (res == 0 && len1 == len2) {
        finalRes = 0;
    } else if (res == 0 && len1 != len2) {
        if (len1 > len2) {
            finalRes = 1;
        } else {
            finalRes = -1;
        }
    }

    return finalRes;

    // 1 = s1 > s2
    // -1 = s1 < s2
    // 0 = equal
}

int main() {
    int finalRes = stringCompare();

    if (finalRes == 1) {
        cout << "The first string is larger." << endl;
    } else if (finalRes == -1) {
        cout << "The second string is larger." << endl;
    } else if (finalRes == 0) {
        cout << "The two strings are equal." << endl;
    }
    return 0;
}