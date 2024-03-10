#include <iostream>
using namespace std;

class Lock {
    public:
        Lock(int left, int right) {
            l = left;
            r = right;   
        }
        void getOper(); // ga usah kurung kurawal, data type
        void check();
    private:
        int l, r;
        char turn;
        int steps;
        char prevTurn;
        int newL = 0, newR = 0;
        bool restart = false;
};

void Lock::getOper() { // data type
    do
    {
        cout << "Enter the operation:" << endl;
        cin >> turn;
        if (turn == 'r' || turn == 'l') {
            cin >> steps;
        } else if (turn == 's') {
            newR = 0;
            newL = 0;
        } else { break; }

        if (turn == 'r') {
            if (prevTurn != 'r' && restart != true) { newL = 0; }
            newR += steps;
        } else if (turn == 'l') {
            newL += steps;
            if (prevTurn != 'l' && restart != true) { newR = 0; }
        }

        prevTurn = turn;
    } while (turn != 'u' && turn != 'e');

    if (turn == 'u') { 
        check(); 
    } else if (turn == 'e') {
        cout << "Program terminate!" << endl;
    }
}

void Lock::check() {
    if (newL == l && newR == r) {
        cout << "Successful!" << endl;
    } else {
        cout << "Failed!" << endl;
        restart = true;
        getOper();
    }
}

int main() {
    int left, right;

    cout << "Enter the value for the left counter:" << endl;
    cin >> left;

    cout << "Enter the value for the right counter:" << endl;
    cin >> right;

    Lock L(left, right);

    L.getOper();



    return 0;
}