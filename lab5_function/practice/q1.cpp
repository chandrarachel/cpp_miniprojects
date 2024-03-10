#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void decToBin(double dec) {
    int i = 0;
    double bin[10000] = {0};
    int inte = int(dec);
    double koma = dec - inte;

    while (inte != 0) {
        bin[i] = inte % 2;
        inte /= 2;
        i++;
    }

    for (int j=i-1; j>=0; j--) {
        cout << bin[j];
    }

    if (koma == 0) {
        cout << endl;
        return;
    } else {
        int binKoma[10000] = {0};
        cout << '.';

        i = 0;

        while (koma != 0) {
            koma *= 2;
            binKoma[i] = int(koma);
            koma -= binKoma[i];
            i++;
        }

        for (int j=0; j<i; j++) {
            cout << binKoma[j];
        }
    }
}

int main() {
    double dec;
    cout << "Enter the decimal double number:" << endl;
    cin >> dec;

    cout << "The corresponding binary double is: ";
    decToBin(dec);
    return 0;
}