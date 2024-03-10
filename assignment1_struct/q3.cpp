#include <iostream>
#include <iomanip>
using namespace std;

const int N = 10;

struct Date {
    int day, month, year;
};

struct Book {
    int id;
    double price;
    Date date;
};

struct Library {
    Book books[11] = {0};
    int num;
};

void listOptions() {
    cout << "~~~~~~~~~Welcome!~~~~~~~~~~" << endl;
    cout << "0: Exit" << endl;
    cout << "1: Add" << endl;
    cout << "2: Show" << endl;
    cout << "3: Delete" << endl;
    cout << "4: Sort" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void add(Library *p) {
    int newBook;
    double newPrice;
    int newDay, newMonth, newYear;

    cout << "Input Book ID:" << endl;
    cin >> newBook;
    p->books[p->num].id = newBook;

    cout << "Input Price:" << endl;
    cin >> newPrice;
    p->books[p->num].price = newPrice;

    cout << "Input Date (dd mm yyyy):" << endl;
    cin >> newDay >> newMonth >> newYear;
    p->books[p->num].date.day = newDay;
    p->books[p->num].date.month = newMonth;
    p->books[p->num].date.year = newYear;
    (p->num)++;
}

void show(Library l) {
    for (int i=0; i<(l.num); i++) {
        if (l.books[i].id != 0) {
            cout << setw(3) << setfill('0') << l.books[i].id;
            cout << "     ";

            cout << fixed << setprecision(2) << l.books[i].price;
            cout << "   ";

            cout << l.books[i].date.day << '-' << l.books[i].date.month << '-' << l.books[i].date.year;
            cout << endl;
        }
    }
}

void del(Library *l) {
    int idtoDel, delIndex = -1;
    cout << "Enter the ID to be deleted" << endl;
    cin >> idtoDel;

    for (int i=0; i<l->num; i++) {
        if (l->books[i].id == idtoDel) {
            delIndex = i;
            break;
        }
    }
    if (delIndex != -1) {
        for (int i=delIndex; i<(l->num)-1; i++) {
            l->books[i].id = l->books[i+1].id;
            l->books[i].price = l->books[i+1].price;
            l->books[i].date.day = l->books[i+1].date.day;
            l->books[i].date.month = l->books[i+1].date.month;
            l->books[i].date.year = l->books[i+1].date.year;
        }
        (l->num)--;
    } else {
        cout << "The ID cannot be found" << endl;
    }
}

void sort_id(Library &l) {
    int temp1, temp3, temp4, temp5;
    double temp2; // because price is double

    for (int i=0; i<(l.num)-1; i++) {
        for (int j=(l.num)-1; j>i; j--) {
            if (l.books[j].id < l.books[j-1].id) {
                temp1 = l.books[j].id;
                temp2 = l.books[j].price;
                temp3 = l.books[j].date.day;
                temp4 = l.books[j].date.month;
                temp5 = l.books[j].date.year;

                l.books[j].id = l.books[j-1].id;
                l.books[j].price = l.books[j-1].price;
                l.books[j].date.day = l.books[j-1].date.day;
                l.books[j].date.month = l.books[j-1].date.month;
                l.books[j].date.year = l.books[j-1].date.year;

                l.books[j-1].id = temp1;
                l.books[j-1].price = temp2;
                l.books[j-1].date.day = temp3;
                l.books[j-1].date.month = temp4;
                l.books[j-1].date.year = temp5;
            }
        }
    }
}

void sort_date(Library &l) {
    int temp1, temp3, temp4, temp5;
    double temp2; // because price is double

    for (int i=0; i<(l.num)-1; i++) {
        for (int j=(l.num)-1; j>i; j--) { // decrement
            if ((l.books[j].date.year < l.books[j-1].date.year) || ((l.books[j].date.year == l.books[j-1].date.year) && (l.books[j].date.month < l.books[j-1].date.month)) || ((l.books[j].date.year == l.books[j-1].date.year) && (l.books[j].date.month == l.books[j-1].date.month) && (l.books[j].date.day < l.books[j-1].date.day))) {
                temp1 = l.books[j].id;
                temp2 = l.books[j].price;
                temp3 = l.books[j].date.day;
                temp4 = l.books[j].date.month;
                temp5 = l.books[j].date.year;

                l.books[j].id = l.books[j-1].id;
                l.books[j].price = l.books[j-1].price;
                l.books[j].date.day = l.books[j-1].date.day;
                l.books[j].date.month = l.books[j-1].date.month;
                l.books[j].date.year = l.books[j-1].date.year;

                l.books[j-1].id = temp1;
                l.books[j-1].price = temp2;
                l.books[j-1].date.day = temp3;
                l.books[j-1].date.month = temp4;
                l.books[j-1].date.year = temp5;
            } else if ((l.books[j].date.year == l.books[j-1].date.year) && (l.books[j].date.month == l.books[j-1].date.month) && (l.books[j].date.day == l.books[j-1].date.day)) {
                if (l.books[j].id < l.books[j-1].id) {
                temp1 = l.books[j].id;
                temp2 = l.books[j].price;
                temp3 = l.books[j].date.day;
                temp4 = l.books[j].date.month;
                temp5 = l.books[j].date.year;

                l.books[j].id = l.books[j-1].id;
                l.books[j].price = l.books[j-1].price;
                l.books[j].date.day = l.books[j-1].date.day;
                l.books[j].date.month = l.books[j-1].date.month;
                l.books[j].date.year = l.books[j-1].date.year;

                l.books[j-1].id = temp1;
                l.books[j-1].price = temp2;
                l.books[j-1].date.day = temp3;
                l.books[j-1].date.month = temp4;
                l.books[j-1].date.year = temp5;
            }
            }
        }
    }
}

void sort(Library &l) {
    int n;
    cout << "1: Sort by ID" << endl;
    cout << "2: Sort by Date" << endl;
    cin >> n;

    if (n == 1) {
        sort_id(l);
    } else if (n==2) {
        sort_date(l);
    }
}

void init(Library *p) {
    p->books[p->num].id = 3;
    p->books[p->num].price = 10.5;
    p->books[p->num].date.day = 15;
    p->books[p->num].date.month = 1;
    p->books[p->num].date.year = 1990;
    (p->num)++;

    p->books[p->num].id = 2;
    p->books[p->num].price = 20.55;
    p->books[p->num].date.day = 15;
    p->books[p->num].date.month = 2;
    p->books[p->num].date.year = 2024;
    (p->num)++;

    p->books[p->num].id = 4;
    p->books[p->num].price = 10.5;
    p->books[p->num].date.day = 20;
    p->books[p->num].date.month = 2;
    p->books[p->num].date.year = 2021;
    (p->num)++;

    p->books[p->num].id = 1;
    p->books[p->num].price = 30.1;
    p->books[p->num].date.day = 20;
    p->books[p->num].date.month = 2;
    p->books[p->num].date.year = 2021;
    (p->num)++;
}


int main() {
    Library lib;
    lib.num = 0;

    init(&lib);
    
    int opt;

    listOptions();
    cin >> opt;

    if (opt == 1) {
        if (lib.num <10) {
            add(&lib);
        } else {
            cout << "Library is full" << endl;
        }    
    } else if (opt == 2) {
        show(lib);
    } else if (opt == 3) {
        del(&lib);
    } else if (opt == 4) {
        sort(lib);  
    }

    while (opt != 0) {
        cout << endl;
        listOptions();
        cin >> opt;

        if (opt == 1) {
            if (lib.num <10) {
                add(&lib);
            } else {
                cout << "Library is full" << endl;
                continue;
            }    
        } else if (opt == 2) {
            show(lib);
        } else if (opt == 3) {
            del(&lib);
        } else if (opt == 4) {
            sort(lib);  
    }
    }

    cout << "Bye!" << endl;
    

    return 0;
}