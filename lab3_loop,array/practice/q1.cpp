#include <iostream>
using namespace std;

int main() {
    int len;
    cout << "Enter the diagonal length: " << endl;
    cin >> len;

    while (len < 0 || len%2 == 0) {
        cout << "Please enter an odd positive number!" << endl;
        cin >> len;
    }

    for (int i=0; i < (len+1)/2; i++) {
        for (int j=0; j < (len+1)/2-1-i; j++) {
            cout << " ";
        }
        for (int j=0; j < 2*i+1; j++) {
            cout << '*';
        }
        cout << endl;
    }

    for (int i=0; i < (len-1)/2; i++) {
        for (int j=0; j < i+1; j++) {
            cout << ' ';
        }
        for (int j=0; j<len - 2*(i+1); j++) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}