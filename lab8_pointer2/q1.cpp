#include <iostream>
using namespace std;

char* deleteStr(char* str, char delete_char) {
    int len = 0;
    
    for (int i=0; str[i] != '\0'; i++) {
        len++;
    }

    char* final = new char[len+1];

    int iter = 0, resIter = 0;
    while (str[iter] != '\0') {
        if (str[iter] != delete_char) {
            final[resIter] = str[iter];
            iter++;
            resIter++;
        } else {
            iter++;
        }
    } 

    return final;
    
}

int main() {
    char input[100];
    char delete_char; 
    cout << "Enter the input string:" << endl;
    cin.getline(input, 100);

    cout << "Enter the input delete_char:" << endl;
    cin.get(delete_char); // cin.get() so input can be space

    char* ans = deleteStr(input, delete_char); // char*

    cout << "The modified string is: ";
    cout << ans << endl;
    delete[] ans;

    return 0;
}