#include <iostream>
#include <cstring>
using namespace std;

class Candy {
    public:
        int price;
        int amount;
        char* name = NULL;
        bool dyn = false;
        Candy();
        Candy(int, int, char*);
        Candy(const Candy &other);
        ~Candy();
};

Candy::Candy() {
    price = 10;
    amount = 20;
    name = new char[100];
    strcpy(name, "strawberry");//
    dyn = true;
}

Candy::Candy(int p, int a, char* n) {
    price = p;
    amount = a;
    name = n;
}

Candy::Candy(const Candy &other) {
    price = other.price;
    amount = other.amount;
    name = other.name;
}

Candy::~Candy() {
    if (dyn) { delete [] name; };
}

int main() {
    int num;
    cout << "Which constructor to use (1: default, 2: parameterized, 3: copy)?" << endl;
    cin >> num;

    if (num == 1) {
        Candy  c1; // no need parentheses
        cout << "c1: name-" << c1.name << "; price-" << c1.price << "; amount-" << c1.amount << endl;
    } else {
        int price, amount;
        char name[100];

        cout << "Enter name:" << endl;
        cin >> name;
        cout << "Enter price:" << endl;
        cin >> price;
        cout << "Enter amount:" << endl;
        cin >> amount;

        Candy c2(price, amount, name);
        cout << "c1: name-" << c2.name << "; price-" << c2.price << "; amount-" << c2.amount << endl;

        if (num == 3) {
            Candy c3(c2);
            cout << "c2: name-" << c3.name << "; price-" << c3.price << "; amount-" << c3.amount << endl;

        }
        
    }

    return 0;
}