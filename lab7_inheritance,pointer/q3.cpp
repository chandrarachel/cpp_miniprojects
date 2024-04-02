#include <cstring>
#include <iostream>
using namespace std;

void sortStr(string * arr, int num) {
    for (int i=0; i<num-1; i++) {
        for (int j=num-1; j>i; j--) {
            int res = arr[j].compare(arr[j-1]); // j=right, j-1=left
            if (res < 0) {  // jangan pake res == -1 atau 0 atau 1
                string temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main() {
    int num;
    string arr[14];

    cout << "Enter the number of the strings:" << endl;
    cin  >> num;

    cout << "Enter the contents of each string:" << endl;
    for (int i=0; i<num; i++) {
        cin >> arr[i];
    }

    sortStr(arr, num);

    cout << "The sorted strings are:" << endl;
    for (int i=0; i<num; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}