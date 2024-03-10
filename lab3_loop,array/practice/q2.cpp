#include <iostream>
using namespace std;

int main() {

    // count the sum
    int sum[36];
    int sumIndex = 0;
    for (int i=1; i<=6; i++) {
        for (int j=1; j<=6; j++) {
            sum[sumIndex++] = i+j;
        }
    }

    // count the occurence
    int countOccur[13];
    for (int i=0; i<13; i++) {
        countOccur[i] = 0;
    }
    for (int i=0; i<36; i++) {
        countOccur[sum[i]]++;
    }

    // create a 2D array
    int finalArr[11][2];
    for (int i=0; i<11; i++) {
        finalArr[i][0] = countOccur[i+2];
        finalArr[i][1] = i+2;
    }

    // sort finalArr by number of occur_bubble sort
    int temp1, temp2;
    for (int i=0; i<10; i++) { // outer loop, utk berapa kali kita mau nge swap (?)
        for (int j=10; j>i; j--) { // j>i, misalnya di akhir j=1 > i=0, tujuannya biar berenti pas udah index ke-1
            if (finalArr[j][0] < finalArr[j-1][0]) {
                temp1 = finalArr[j][0];
                temp2 = finalArr[j][1];
                finalArr[j][0] = finalArr[j-1][0];
                finalArr[j][1] = finalArr[j-1][1]; 
                finalArr[j-1][0] = temp1;
                finalArr[j-1][1] = temp2;
            }
        }
    }

    for (int i=0; i<11; i++) {
        cout << finalArr[i][0] << " occurrence(s) of the sum " << finalArr[i][1] << endl;
    }
    return 0;
}