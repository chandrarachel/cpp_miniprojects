#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char arr[50];
    cout << "Enter the input string:" << endl;
    cin.getline(arr, 50);

    int len = strlen(arr);
    int count = 0;
    char *p = arr;
    while (*p != '\0') {
        if (*p == ' ') {
            count++;
        }
        p++;
    }

    int n = len + count + 1; // we need to add two char '&0' so + count to add one more space; + 1 because the end of line is \0
    char *s = new char[n]; // create new dynamically allocated array with size n
    // char *ret = s;
    memset(s, '\0', n);
    for (int i=0; i<len; i++) {
        s[i] = arr[i];
    }

    p = s + n - 1; // end of the string with extra space (misal array pertama kan cuman ada satu space tiap setelah satu kata; kita butuh dua space tiap abis satu kata utk %0, jadinya perly extra space)
    char *q = s + len; // end of string no extra space
    while (q < p) {
        if (*q == ' ') {
            *p-- = '0'; // nge cek dari kanan ke kiri, kanan diganti lalu pointer bakal point ke yg di kirinya            *p = '%';
            *p = '%';
        } else {
            *p = *q;
        }
        q--;
        p--;
    }

    cout << "The replace string is: " << s << endl;
    return 0;
}