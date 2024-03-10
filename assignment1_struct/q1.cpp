#include <iostream>
using namespace std;

int main() {
    int size;
    char shape;
    cout << "Please input the height (integer):" << endl;
    cin >> size;

    cout << "Do you want to print M or W?:" << endl;
    cin >> shape;

    if (size <= 1) {
        cout << "Wrong input!";
    } else if (shape != 'M' && shape != 'W') {
        cout << "Wrong input!";
    } else if (size > 1 && (shape == 'M' || shape == 'W')) {
        if (shape == 'M') {
           for (int i=1; i<=size; i++) { // loop for each row
                // print spaces
                for (int j = 1; j <= size-i; j++) {
                    cout << ' ';
                }
                // print asterisks
                for (int j = 1; j <= 2*i-1; j++) {
                    if (j==1 || j==2*i-1) {
                        cout << '*';
                    } else  {
                        cout << ' ';
                    }      
                }


                // print spaces
                for (int j = 1; j <= 2*(size-i)-1; j++) {
                    cout << ' ';
                }
                // print asterisks
                for (int j = 1; j <= 2*i-1; j++) {
                    if ((j==1 || j==2*i-1) && (i != size)) {
                        cout << '*';
                    } else if (j==2*i-1 && i==size) {
                        cout << '*';
                    } else if (i==size && j == (2*i-2))  {
                        continue;
                    } else {
                        cout << ' ';
                    }   
                }
                cout << endl;
           } 
        } else if (shape == 'W') {
            // index from zero
            for (int i=0; i<size; i++) {
                // spaces
                for (int j=0; j<i; j++) {
                    cout << ' ';
                }
                // asterisks
                for (int j=0; j<2*(size-i)-1; j++) {
                    if (j==0 || j==2*(size-i)-2) {
                        cout << '*';
                    } else {
                        cout << ' ';
                    }
                }
                // spaces
                for (int j=0; j<2*i-1; j++) {
                    cout << ' ';
                }
                // asterisks
                for (int j=0; j<2*(size-i)-1; j++) {
                    if ((j==0 || j==2*(size-i)-2)) {
                        if (i==0 && j==0) {
                            continue;
                        }
                        cout << '*';
                    } else {
                        cout << ' ';
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}