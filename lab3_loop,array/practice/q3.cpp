#include <iostream>
using namespace std;

int main() {
    int coin[4] = {1,2,5,10};
    int value, counter = 0;
    cout << "Enter the value of the money:" << endl;
    cin >> value;

    for (int i=0; i<4; i++) {
        if (coin[i]==value) {
            counter++;
        }
    }

    return 0;
}