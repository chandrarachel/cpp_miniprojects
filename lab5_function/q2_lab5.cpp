#include <iostream>
using namespace std;

void print20to99(int num) {
    int digit1, digit2;
    digit1 = num / 10;
    digit2 = num % 10;

    if (digit1 == 2) {
        cout << "Twenty";
    } else if (digit1 == 3) {
        cout << "Thirty";
    } else if (digit1 == 4) {
        cout << "Forty";
    } else if (digit1 == 5) {
        cout << "Fifty";
    } else if (digit1 == 6) {
        cout << "Sixty";
    } else if (digit1 == 7) {
        cout << "Seventy";
    } else if (digit1 == 8) {
        cout << "Eighty";
    } else if (digit1 == 9) {
        cout << "Ninty";
    }

    if (digit2 != 0) {
        cout << ' ';
        if (digit2 == 1) {
        cout << "One";
    } else if (digit2 == 2) {
        cout << "Two";
    } else if (digit2 == 3) {
        cout << "Three";
    } else if (digit2 == 4) {
        cout << "Four";
    } else if (digit2 == 5) {
        cout << "Five";
    } else if (digit2 == 6) {
        cout << "Six";
    } else if (digit2 == 7) {
        cout << "Seven";
    } else if (digit2 == 8) {
        cout << "Eight";
    } else if (digit2 == 9) {
        cout << "Nine";
    }
    }
}

int main() {
    int num;
    cout << "Enter the integer number:" << endl;
    cin >> num;

    print20to99(num);
    return 0;
}