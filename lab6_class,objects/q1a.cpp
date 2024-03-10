#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    private:
    int side1, side2, side3;
    double area;

    public:
    Triangle() {
    side1 = 0;
    side2 = 0;
    side3 = 0;
    }

    Triangle (int a, int b, int c) {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    void setSides() {
        cin >> side1 >> side2 >> side3;
    }

    void computeArea() {
        double s = (side1 + side2 + side3) / double(2); // remember to divide by double so the result won't cut off the number after .
        area = sqrt(s*(s - side1)*(s - side2)*(s - side3));
        cout << area << endl;
    }
};


int main() {
    Triangle t1, t2(3,4,5), t3;

    cout << "Area of Triangle (i.e. triangle1): ";
    t1.computeArea();

    cout << "Area of Triangle (i.e. triangle2 with sides 3, 4 and 5): ";
    t2.computeArea();

    cout << "Enter New Sides for Triangle:" << endl;
    t3.setSides();

    cout << "Area of Triangle: ";
    t3.computeArea();


    return 0;
}