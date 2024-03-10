#include <iostream>
using namespace std;

int half_length(int num) {
    int len = 0;

    while (num) {
        num /= 10;
        len++;
    }

    if (len % 2 == 0) {
        len /= 2;
    } else {
        len = len / 2 + 1;
    }
    return len;
}

int power(int x, int p) {
    int res = 1;
    for (int i=0; i<p; i++) {
        res *= x;
    }
    return res;
}

int getValue(int num) {
    int len = half_length(num);
    int d1, d2;
    for (int i=len; i>0; i--) {
        d1 = num % power(10, i);
        d2 = d1 / power(10, i-1);
        if ((i == len && d2 != 0) || i != len) {
            cout << d2;
        }
    }
    return 0;
}


int main() {
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;

    int length = half_length(num);

    if (length == 1) {
        cout << "The value of last " << half_length(num) << " digit of " << num << " is: ";
    } else {
        cout << "The value of last " << half_length(num) << " digits of " << num << " is: ";
    }
    getValue(num);
    cout << endl;

    return 0;
}