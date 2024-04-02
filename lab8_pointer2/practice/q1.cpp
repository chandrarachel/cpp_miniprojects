#include <iostream>
#include <cstring>
using namespace std;

char* replace (char* str, char* space) {
    int len = strlen(str);
    const int lenSpace = strlen(space);
    char* modifiedStr = new char[len + lenSpace + 1];
    int modCounter = 0;

    for (int i=0; i<len; i++) {
        if (str[i] != ' ') {
            modifiedStr[modCounter++] = str[i];
        } else {
            for (int j=0; j<lenSpace; j++) {
                modifiedStr[modCounter] = space[j];
                modCounter++;
            }
        }
    }

    return modifiedStr;
}

int main() {
    char str[100];
    char deleteThis[100];
    cout << "Enter the input string:" << endl;
    cin.getline(str, 100);

    cout << "Enter the input space str:" << endl;
    cin.getline(deleteThis, 100);

    char* ans = replace(str, deleteThis);
    cout <<  "The modified string is: " << ans << endl;

    delete [] ans;
    return 0;
}