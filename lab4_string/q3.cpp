#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[50], str2[50];

    cout << "Input String 1:" << endl;
    cin >> str1;

    cout << "Input String 2:" << endl;
    cin >> str2;

    int len;
    char temp;

    for (int i=0; str1[i] != '\0'; i++) { // get length of str1
        len++;
    }

    for (int i=0; i<len-1; i++) {
        for (int j=len-1; j>i; j--) {
            if (str1[j] < str1[j-1]) {
                temp = str1[j];
                str1[j] = str1[j-1];
                str1[j-1] = temp;                
            }
        }
    }

    for (int i=0; i<len-1; i++) {
        for (int j=len-1; j>i; j--) {
            if (str2[j] < str2[j-1]) {
                temp = str2[j];
                str2[j] = str2[j-1];
                str2[j-1] = temp;                
            }
        }
    }

    int sum_len = 2 * len;
    char str3[50];
    int i = 0, j = 0;
    for (int k=0; k<sum_len; k++) {
        if (i == len) {
            str3[k] = str2[j];
            j++;
            continue;
        }
        if (j == len) {
            str3[k] = str1[i];
            i++;
            continue;
        }
        if (str1[i] < str2[j]) {
            str3[k] = str1[i];
            i++;
        } else {
            str3[k] = str2[j];
            j++;
        }
    }
    str3[sum_len]  = '\0';
    cout << "Merged String: " << str3 << endl;


    return 0;
}