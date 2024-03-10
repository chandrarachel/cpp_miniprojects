#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    friend void largerTriangle(Triangle t1, Triangle t2);

    private:
    int side1, side2, side3;
    double area;

    public:
    double getArea() {return area;}

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
    }
};

void largerTriangle(Triangle t1, Triangle t2) {
    t1.computeArea();
    t2.computeArea();
    double area1 = t1.getArea();
    double area2 = t2.getArea();

    if (area1 > area2) {
        cout << "The Area " << area1 << " of Triangle 1 is larger than ";
        cout << "area " << area2 << " of Triangle 2." << endl;
    } else if (area1 < area2) {
        cout << "The Area " << area2 << " of Triangle 2 is larger than ";
        cout << "area " << area1 << " of Triangle 1." << endl;
    } else if (area1 == area2) {
        cout << "The areas of the two triangles are identical." << endl;
    } 
}


int main() {
    Triangle t1, t2;

    cout << "Enter New Sides for Triangle 1: " << endl;
    t1.setSides();

    cout << "Enter New Sides for Triangle 2: " << endl;
    t2.setSides();


    largerTriangle(t1, t2);

    return 0;
}