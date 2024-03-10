#include <iostream>
using namespace std;

int main() {
    char str1[50], str2[50];

    cout << "Enter two strings:" << endl;
    cin >> str1 >> str2;

    int len1 = 0, len2 = 0;

    for (int i=0; str1[i] != '\0'; i++) { // len of str1
        len1++;
    }
    for (int i=0; str2[i] != '\0'; i++) { // len of str1
        len2++;
    }

    bool match = false;
    int count = 0;
    for (int i=0; i<len1; i++) {
        for (int j=0; j<len2; j++) {
            match = true;
            if (str1[i + j] != str2[j]) { // i + j = to check according to str2 (step up once each time), if only i, it will keep on comparing the same letter of str1 with different str2 (not checking substrings)
                match = false;
                break;
            }
        }
        if (match) {
            count++;
        }
    }

    cout << "The occurrence of " << str2 << " in " << str1 << " is: " << count << endl;
    return 0;
}