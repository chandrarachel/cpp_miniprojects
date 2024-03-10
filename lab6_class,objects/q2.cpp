#include <iostream>
using namespace std;

class Record {
    private:
    int month, day;
    double balance;
    double rArr[30][3] = {{0}};

    public:
    void setRecords(int size) {
        for (int i=0; i<size; i++) {
            for (int j=0; j<3; j++) {
                cin >> rArr[i][j];
            }
        }
    }

    void sortBalance(int size) {
        double temp1, temp2, temp3;

        for (int i=0; i<size; i++) {
            for (int j=0; j<size-1; j++) {
                for (int k=size-1; k>j; k--) {
                    if (rArr[k][2] < rArr[k-1][2]) { // use the innermost variable (k) for everything inside this!
                        temp1 = rArr[k][0];
                        rArr[k][0] = rArr[k-1][0];
                        rArr[k-1][0] = temp1;

                        temp2 = rArr[k][1];
                        rArr[k][1] = rArr[k-1][1];
                        rArr[k-1][1] = temp2;

                        temp3 = rArr[k][2];
                        rArr[k][2] = rArr[k-1][2];
                        rArr[k-1][2] = temp3;
                    }
                }
            }
        }

        for (int i=0; i<size; i++) {
            for (int j=0; j<3; j++) {
                cout << rArr[i][j];
                if (j != 3-1) {cout << " ";};
            }
            if (i != size-1) {cout << endl;};
        }
    }

    void sortTime(int size) {
        double temp1, temp2, temp3;

        for (int i=0; i<size; i++) {
            for (int j=0; j<size-1; j++) {
                for (int k=size-1; k>j; k--) {
                    if ((rArr[k][0] < rArr[k-1][0]) || ((rArr[k][0] == rArr[k-1][0]) && (rArr[k][1] < rArr[k-1][1]))) { // use the innermost variable (k) for everything inside this!
                        temp1 = rArr[k][0];
                        rArr[k][0] = rArr[k-1][0];
                        rArr[k-1][0] = temp1;

                        temp2 = rArr[k][1];
                        rArr[k][1] = rArr[k-1][1];
                        rArr[k-1][1] = temp2;

                        temp3 = rArr[k][2];
                        rArr[k][2] = rArr[k-1][2];
                        rArr[k-1][2] = temp3;
                    }
                }
            }
        }

        for (int i=0; i<size; i++) {
            for (int j=0; j<3; j++) {
                cout << rArr[i][j];
                if (j != 3-1) {cout << " ";};
            }
            if (i != size-1) {cout << endl;};
        }
    }
}; // semicolon after class

int main() {
    Record r;
    int size;
    cout << "Enter the number of the records:" << endl;
    cin >> size;

    cout << "Enter the contents of each records:" << endl;
    r.setRecords(size);

    cout << "Sort according to the balance:" << endl;
    r.sortBalance(size);
    if (size != 0) {cout << endl;};

    cout << "Sort according to the time:" << endl;
    r.sortTime(size);
    cout << endl;

    return 0;
}