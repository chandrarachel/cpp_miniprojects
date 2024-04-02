#include <iostream>
#include <string.h>
using namespace std;

void sortStr(char** a, int num) {
    for (int i=0; i<num-1; i++) {
        for (int j=num-1; j>i; j--) {
            int compareRes = strcmp(a[j], a[j-1]);
            if (compareRes < 0) {
                char* temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }

    cout << "Sorted result: ";
    for (int i=0; i<num; i++) {
        cout << a[i];
        if (i != num-1) {
            cout << " ";
        }
    }
    cout << endl;

}

int main() {
    int num;
    cout << "Enter the number of strings:" << endl;
    cin >> num;

    char **str = new char * [num];
    for (int i=0; i<num; i++)  {
        str[i] = new char [50];
    }

    cout << "Enter the input strings:" << endl;
    for (int i=0; i<num; i++) {
        char input[50] = {0};
        cin >> input;
        int len = strlen(input);
        for (int j=0; j<len; j++) {
            str[i][j] = input[j];
        }
    }

    sortStr(str, num);

    for (int i=0; i<num; i++)  {
        delete[] str[i];
    } 
    delete[] str;

    return 0;
}