#include <iostream>
using namespace std;

class Shape {
    public:
        void set() {
            cout << "Enter width:" << endl;
            cin >> width;

            cout << "Enter height:" << endl;
            cin >> height;
        }
    protected:
        int width, height;
        int area;
    
};

class PaintCost {
    public:
        void getCost(int a) {
            int cost = 231 * a;
            cout << "Total paint cost is: " << cost << endl;
        }
};

class Rectangle: public Shape, public PaintCost {
    public:
        int getArea() {
            area = width * height;
            return area;
        }
        void getPerimeter() {
            int perimeter = 2 * (width + height);
            cout << "Perimeter is: " << perimeter << endl;
        }
};



int main() {
    Rectangle r; // jgn lupa

    r.set();

    int area = r.getArea();
    cout << "Area is: " << area << endl;

    r.getPerimeter();

    r.getCost(area);


    return 0;
}