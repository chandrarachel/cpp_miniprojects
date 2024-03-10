#include <iostream>
using namespace std;

class Record {
    private:
    int month, day;
    double balance;
    double rArr[30][3] = {{0}};
    double res[50][3] = {{0}};

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

        
    }


    void sortTime(int size) {
        double temp1, temp2, temp3;

        for (int i=0; i<size; i++) {
            for (int j=0; j<size-1; j++) {
                for (int k=size-1; k>j; k--) {
                    if ((res[k][0] < res[k-1][0]) || ((res[k][0] == res[k-1][0]) && (res[k][1] < res[k-1][1]))) { // use the innermost variable (k) for everything inside this!
                        temp1 = res[k][0];
                        res[k][0] = res[k-1][0];
                        res[k-1][0] = temp1;

                        temp2 = res[k][1];
                        res[k][1] = res[k-1][1];
                        res[k-1][1] = temp2;

                        temp3 = res[k][2];
                        res[k][2] = res[k-1][2];
                        res[k-1][2] = temp3;
                    }
                }
            }
        }

        for (int i=0; i<size; i++) {
            for (int j=0; j<3; j++) {
                cout << res[i][j];
                if (j != 3-1) {cout << " ";};
            }
            if (i != size-1) {cout << endl;};
        }
    }

    void find(int size) {
        double findNum; // double!
        cin >> findNum;

        int low = 0;
        int high = size;

        int amount = 0;
        int where[50] = {0};
        bool found = false;
        
        while (low <= high) {
            int mid = (low + high) / 2;



            for (int i=low; i<=high; i++) {
                if (rArr[i][2] == findNum) {
                found = true;

                where[amount] = i;

                amount++;
                } else if (rArr[i][2] > findNum) {
                    high = mid - 1;
                } else if (rArr[i][2] < findNum) {
                    low = mid + 1;
                }
            }
        }

        if (found) {
            cout << amount << " records found!" << endl;
            for (int i=0; i<amount; i++) {
                for (int j=0; j<3; j++) {
                    res[i][j] = rArr[where[i]][j];
                }
            }

            sortTime(amount);
        } else {
            cout << "No records found!";
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
    r.sortBalance(size);

    cout << "Enter the balance to find:" << endl;
    r.find(size);

    return 0;
}