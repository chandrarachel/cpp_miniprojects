#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main() {
    cout << "Enter the value of a, b and c for quadratic equation:" << endl;
    double a, b, c, resType, p, q;
    double x, x1, x2;
    
    cin >> a >> b >> c;
    
    resType = b*b - 4*a*c;
    
    if (resType == 0) {
        x = (-b + sqrt(resType)) / (2*a);
        cout << fixed << setprecision(1);
        cout << "The Quadratic Equation has two equal real roots: " << x << endl;
    } else if (resType > 0) {
        x1 = (-b + sqrt(resType)) / (2*a);
        x2 = (-b - sqrt(resType)) / (2*a);
        cout << fixed << setprecision(1);
        cout << "The Quadratic Equation has two real roots: " << x1 << " and " << x2 << endl;
    } else if (resType < 0) {
        p = -b / (2*a);
        q = (sqrt(4*a*c - b*b)) / (2*a);
        cout << fixed << setprecision(1);
        cout << "The Quadratic Equation has two Complex roots:" << endl;
        cout << p << "+" << q << "i" << endl;
        cout << p << "-" << q << "i" << endl;
    }
    
    
    return 0;
}