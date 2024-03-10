#include <iostream>
using namespace std;

int gcd(int, int);
int lcm(int, int, int);

int main() {
    int a, b;
    cout << "Enter the two integers:" << endl;
    cin >> a >> b;

    cout << "The GCD of " << a << " and " << b << " is: " << gcd(a,b) << endl;
    cout << "The LCM of " << a << " and " << b << " is: " << lcm(a,b, gcd(a,b)) << endl;
    return 0;
}

int gcd(int a, int b) {
    int r;
    int temp1, temp2;
    
    if (a > b) {
        temp1 = a;
        temp2 = b;
    } else {
        temp1 = b;
        temp2 = a;
    }

    while (r != 0) {
        r = temp1 % temp2;
        temp1 = temp2;
        temp2 = r;
    }
    return temp1;
}

int lcm(int a, int b, int res1) {
    return ((a*b)/res1);
}