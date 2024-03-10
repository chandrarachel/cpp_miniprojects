#include <iostream>
using namespace std;

int main() {
    char name[10];
    int distance[10];
    int counter = 0;

    cout << "Input the gas station data:" << endl;
    
    for(int i=0; i<10; i++) {
        cin >> name[i] >> distance[i];
    }

    // find lowest value
    int minDis;
    for(int x=0; x<10; x++) {
        if(x==0) {
            minDis = distance[x];
        } else if(distance[x]<minDis) {
            minDis = distance[x];
        }
    }

    // find how many to print
    int countPrint = 0;
    for(int y=0; y<10; y++) {
        if(distance[y]<=5) {
            countPrint++;
        }
    }
    cout << "The nearby gas stations map is:" << endl;

    for(int j=0; j<10; j++) {
        if(distance[j] <= 5) {
            cout << name[j] << '(' << distance[j] << ')';
            if(distance[j] == minDis) {
                cout << '*';
            }
            counter++;

            if(counter%3 != 0 && counter != countPrint) {
                cout << ' ';
            } else {
                cout << endl;
            }
            

        }
    }
    return 0;
}