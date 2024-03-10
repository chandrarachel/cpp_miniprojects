#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() { // main must be lowercase
double a,b,c, p, area;

cout << "Enter the first side:" << endl;
cin >> a; // add space and semicolon
cout << "Enter the second side:" << endl;
cin >> b;
cout << "Enter the third side:" << endl;
cin >> c;

p = (a + b + c) / 2; // spaces
area = sqrt(p*(p-a)*(p-b)*(p-c));
cout << "The area is: " << fixed << setprecision(2) << area << '\n';

return 0;
}