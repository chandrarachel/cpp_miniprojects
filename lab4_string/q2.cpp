#include <iostream>
using namespace std;

int main() {
    char inp[50];
    char name[50], sid[50];

    cout << "Enter the student info:" << endl;
    cin.getline(inp, 50);

    int last_char_index;
    for (int i=0; inp[i] != '\0'; i++) { // i = len of inp // loop will continue until the last space
        last_char_index = i-1;
    }

    int last_space_index;
    for (int i=last_char_index; i >= 0; i--) {
        if (inp[i] == ' ') {
            last_space_index = i;
            break;
        }
    }

    int x,y;
    for (x=0; x<last_space_index; x++) {
        name[x] = inp[x];
    }
    name[x] = '\0'; // always add null to the end of cstring
    for (y=0; y <= last_char_index; y++) {
        sid[y] = inp[y + last_space_index + 1];
    }
    sid[y] = '\0';

    cout << "Student name is: " << name << endl;
    cout << "Student ID is: " << sid << endl;
    return 0;
}