#include <iostream>
using namespace std;

int main() {

    // Q1. int data type and pointer
    int num1 = 2147483646;
    int * p = &num1;

    cout << "Address stored in p: " << p << endl;
    cout << "Value of variable pointed by p: " << *p << endl;
    
    int num2 = num1 + 2;
    // the value in num1 is the limit of int, that is why it will start over from the lower bound (negative)
    cout << "Value of num1: " << num1 << endl;
    cout << "Value of num2: " << num2 << endl;


    // Q2. int data type and pointer
    int i = 5;
    char a = 'A';
    double x = 1.23;
    i = i - x; // i is an int, so the result is int (yg dibelakang koma dibuang)
    x = x*a; // x is double, that's why the result is still double
    cout << "Value of i is " << i << "\n"; // 3
    cout << "Value of x is " << x << "\n"; // 79.95

    // Q3. conversion
    int j=3, k=2;
    double y;
    y = j/k;
    cout << "first: " << y << endl; // 1
    // because j and k are int; but, y is still double

    y = j/double(k); // explicit conversion: the type of k is converted into double
    cout << "second: " << y << endl; // 1.5
    //

    y = double(j)/k;
    cout << "third: " << y << endl; // 1.5

    y = double(j/k);
    cout << "fourth: " << y << endl; // 1
    // j and k are int, so the result will only keep the int. Only AFTER calculating the division, the result will be converted into a double

    y = j/2;
    cout << "fifth: " << y << endl; // 1

    y = j/2.0;
    cout << "sixth: " << y << endl; // 1.5
    // this is type conversion, int is PROMOTED to double
    // however, y is still double

    return 0;
}