#include<iostream>
using namespace std;

int main() {
    int i, j, n, value;
    cout << "Enter the number of rows:" << endl;
    cin >> n;

    if (n>0) {
        for (i=0; i<n; i++) { // row
            value = i;
            for (j=0; j<n; j++) {
                if (i>j)
                    cout << value-- << " "; // it will be substracted first before printing
                else cout << value++ << " ";
            }
            cout << endl;
        }
    }
    else cout << "Please enter positive integer.\n";
    return 0;
}