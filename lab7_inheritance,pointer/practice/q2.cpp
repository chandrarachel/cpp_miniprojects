#include <iostream>
using namespace std;

void sortRes(string* res, int *len) { // step 3: pake * di parameter func
    for (int i=0; i<(*len)-1; i++) { // step 4: use * to get the value pointed by that pointer
        for (int j=(*len)-1; j>i; j--) { // jangan lupa pake brackets (get value pointer by pointer) & dikurang 1 (bubble sort)
            int compareRes = res[j].compare(res[j-1]);
            if (compareRes < 0) {
                string temp = res[j];
                res[j] = res[j-1];
                res[j-1] = temp;
            }
        }
    }
}

int main() {
    string word;
    cout << "Enter the string:" << endl;
    cin >> word;

    int len = word.length();
    string res[len]; // call by pointer. step 1: declare kek biasa
    for (int i=0; i<len; i++) {
        res[i] = word.substr(i, len-i);
    }

    sortRes(res, &len); // step 2: masukin array kek biasa, selain array pake &

    cout << "The suffixes of the string are:" << endl;
    for (int i=0; i<len; i++) {
        cout << res[i] << endl;
    }
    return 0;
}