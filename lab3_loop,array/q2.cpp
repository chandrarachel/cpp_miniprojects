#include <iostream>
using namespace std;

int main() {
    int arr[20], result[20], size;
    cout << "Enter the size of the array:" << endl;
    cin >> size;

    cout << "Enter the elements of the array:" << endl;
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    int max;
    bool find;

    for(int j=0; j<size; j++) {
        max = -99999;
        find = false;
        for(int k=j+1; k<size; k++) {
            if(arr[k]<arr[j] && arr[k]>max) {
                max = arr[k];
                find = true;
            }
        }
        if(find){
            result[j] = max;
        } else {
            result[j] = -1;
        }
    }

    cout << "The output is:" << endl << result[0];
    for(int i=1; i<size; i++) {
        cout << ", " << result[i];
    }
    cout << endl;
    return 0;
}