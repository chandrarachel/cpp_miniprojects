#include <cstring>
#include <iostream>
using namespace std;

void findWord(char* arr, int* i, int* count) {
    int wordlen = 0;
    (*count)++;
    while (arr[*i]!= ' ' && arr[*i] != '\0') {
        wordlen++;
        (*i)++;
    }
    
    cout << "Word " << *count << " has " << wordlen << " characters." << endl;
}

int main() {
    char input[50];
    cout << "Enter the content of the string:" << endl;
    cin.getline(input, 50);
    int count = 0;

    int i=0;
    while (input[i] != '\0') { // input[i], bukan cuman i
        if (input[i] != ' ') {
            findWord(input, &i, &count);
        } else {
            i++;
        }
    }

    cout << "The number of words in the string is: " << count << endl;
    return 0;
}