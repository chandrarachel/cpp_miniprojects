#include <iostream>
using namespace std;

int main() {
    int arr[6], temp;
    cout << "Enter the element in the array:" << endl;
    for (int i=0; i<6; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<6; i++) { // i0 = 6
        for (int j=1; j<6; j++) { // j1 = 3
            if (arr[j]<arr[j-1]) { // 3, 6, 5, 2
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "The sorted array is:" << endl;
    for (int i=0; i<6; i++) {
        cout << arr[i];
        if (i != 5) {
            cout << ", ";
        }
    }

    return 0;
}