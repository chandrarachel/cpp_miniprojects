#include<iostream>  
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the value of A, B and C:" << endl;
    cin >> a >> b >> c;
    
    if (a>0 && b>0 && c>0) {
        if (a+b>c && a+c>0 && b+c>a) {
            if (a==b && b==c && a==c) {
                cout << "Equilateral" << endl;
            }
            else if (a==b || b==c || a==c) {
                cout << "Isosceles" << endl;
            }
            else {
                cout << "Scalene" << endl;
            }
        }
        else {
            cout << "Impossible" << endl;
        }
        
    }
    else {
        cout << "Impossible" << endl;
    }
    
}
