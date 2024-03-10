#include <iostream>
using namespace std;

void dateOf2017(char date[5])
{
    // 2017-01-01 is Sunday
    int month, day;
    int intDate[5] = {0};

    for (int i=0; i<5; i++) {
        intDate[i] = date[i] - '0';
    }  

    month = intDate[0] * 10 + intDate[1];
    day = intDate[3] * 10 + intDate[4];

    int diff = 0;
    int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i=1; i<month; i++) {
        diff += daysInMonth[i];
        }

    diff += day-1;
    int daysDiff = diff % 7;

    for (int i=0; i<5; i++) {
        cout << date[i];
    }

    cout << " is ";

    if (daysDiff == 0) {
        cout << "Sunday";
    } else if (daysDiff == 1) {
        cout << "Monday";
    } else if (daysDiff == 2) {
        cout << "Tuesday";
    } else if (daysDiff == 3) {
        cout << "Wednesday";
    } else if (daysDiff == 4) {
        cout << "Thursday";
    } else if (daysDiff == 5) {
        cout << "Friday";
    } else if (daysDiff == 6) {
        cout << "Saturday";
    }
}

int main() {
    char arr[5] = {0};
    cout << "Enter the date in 2017:" << endl;
    cin >> arr;

    cout << "2017-";
    dateOf2017(arr);
    return 0;
}