Name: Rachel Samantha CHANDRA
 
Q1 passed testcases: 6/6
Student answer: 
#include <iostream>
#include <iomanip>
using namespace std;

double pw(double x, int n) {
    double res = 1.0;
    
    for (int i=0; i<n; i++) {
        res *= x;
    }
    return res;
}

int fct(int n) {
    int res = 1;
    for (int i = n; i>0; i--)  {
        res *= i;
    }
    return res;
}

void Q1() {
	int n;
	double x;
	double f = 0.0;
	
	do {
	    cout << "Input x:" << endl;
	    cin >> x;
	} while (x < 0.1 || x > 1);
	
	cout << "Input n:" << endl;
	cin >> n;
	
	
	while (n <=0 || n % 2 == 0) {
	  if (n <= 0) {
	    cout << "Input n is not negative or zero:" << endl;
	    cin >> n;
	} else if (n % 2 == 0) {
	    cout << "Input n is not an odd number:" << endl;
	    cin >> n;
	}  
	}
	
	for (int i=1; i<= n; i++) {
	    f += (pw(x,i)) / fct(i);
	}
	
	cout << "Value is: " << fixed << setprecision(2) << f << endl << endl;
	
	
	cout << "Formula is:" << endl;
	for (int i=1; i<=n; i++) {
	    cout << "x^" << i << '/' << i << '!';
	    if (i != n) {
	        cout << '+';
	    }
	    
	}
}

int main() {
	Q1();
	return 0;
}

Marks for Q1:30

--------------------------------------------------
Q2 passed testcases: 0/5
Student answer: 
#include <iostream>
using namespace std;

int pw(int x, int n) {
    int res = 1;
    
    for (int i=0; i<n; i++) {
        res *= x;
    }
    return res;
}

// You can consider to implement this checking as a function
bool isFinite(int n) {
    int res = n;
    bool found = true;
    int count = 0;
    while (n != 1) {
        int len = 1;
        int temp = n;
        do {
            temp /= 10;
            len++;
        } while (temp > 10);
    
    
    const int pjg = len;
    int arr[pjg];
    int temp2= n;
    int index = 0;
    for (int i=pjg; i>0; i--) {
        arr[index] =  temp2/pw(10, i);
        temp2 %= pw(10, i);
    }
    
    for (int i=0; i<pjg; i++) {
        res += arr[i] * arr[i];
    }
    n = res;
    
    count++;
    if (count > 20) {
        found = false;
        break;
    }
    }
    
    if (found) {
        return 1;
    } else {
        return 0;
    }
    
}

void sortArr(int arr[]) {
    for (int i=0; i<10-1; i++) {
        for (int j=10-1; j>i; j--) {
            if (arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    
    for (int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }
}

void Q2() {
	int arr[10], out[10];
	
	cout << "Input array (arr):" << endl;
	for (int i=0; i<10; i++) {
	    cin >> arr[i];
	}
	
	for (int i=0; i<10; i++) {
	    out[i] = isFinite(arr[i]);
	}
	
	cout << "Output array (out):" << endl;
	
	for (int i=0; i<10; i++) {
	    cout << out[i] << ' ';
	}
	
	cout << endl << endl;
	cout << "Sorted arrays: " << endl;
	sortArr(arr);
	
	for (int i=0; i<10; i++) {
	    out[i] = isFinite(arr[i]);
	}
	cout << endl;
	for (int i=0; i<10; i++) {
	    cout << out[i] << ' ';
	}

}

int main() {
	Q2();
	return 0;
}

Marks for Q2: 24

--------------------------------------------------
Q3 passed testcases: 1/1
Student answer: 
#include <iostream>
#include <string>
using namespace std;

struct Name {
    string fName;
    string lName;
} nn;

class Student {
    private: 
        int id;
        Name name;
        int year;
        char cgpa;
        
    public:
        Student(int, Name, int, char);
        string getLastName() {
            return name.lName;
        }
        int getYear() {
            return year;
        }
        char getCGPA() {
            return cgpa;
        }
        int getID() {
            return id;
        }
        string getFirstName() {
            return name.fName;
        }
        void print();
};

Student::Student(int nid, Name nname, int nyear, char ncgpa) {
  id = nid;
  name = nname;
  year = nyear;
  cgpa = ncgpa;
}

void sortStudents(Student sArr[]) {
    for (int i=0; i<6-1; i++) {
        for (int j=6-1; j>i; j--) {
            int compare = sArr[j].getLastName().compare(sArr[j-1].getLastName());
            if (sArr[j].getCGPA() < sArr[j-1].getCGPA() || ((sArr[j].getCGPA() == sArr[j-1].getCGPA()) && compare < 0)) {
                Student temp = sArr[j];
                sArr[j] = sArr[j-1];
                sArr[j-1] = temp;
            }
        }
    }
}

void Student::print() {
    
    string yr;
    if (getYear() == 1) {
        yr = "Freshman";
    } else if (getYear() == 2) {
        yr = "Sophomore";
    } else if (getYear() == 3) {
        yr = "Junior";
    }
    else if (getYear() == 4) {
        yr = "Senior";
    }
    cout << getID() << ", " << getFirstName() << " " << getLastName() << ": " << yr << ", GPA: " << getCGPA() << endl; 
}


void Q3() {
	int ids[6] = {111111, 222222, 333333, 444444, 555555, 666666};
	Name names[6] = { {"Peter", "Pan"}, {"Mary", "Swift"}, {"Chris", "Wang"},
		{"Tom", "Cui"}, {"Harry", "Potter"},{"Alex", "Christopher"}};
	int years[6] = {1, 1, 2, 4, 3, 3};
	char cgpas[6] = {'B', 'A', 'C', 'D', 'A', 'B'};

	Student students[6] = {
		Student(ids[0], names[0], years[0], cgpas[0]),
		Student(ids[1], names[1], years[1], cgpas[1]),
		Student(ids[2], names[2], years[2], cgpas[2]),
		Student(ids[3], names[3], years[3], cgpas[3]),
		Student(ids[4], names[4], years[4], cgpas[4]),
		Student(ids[5], names[5], years[5], cgpas[5]),
	};
	
	
	
	sortStudents(students);
	for (int i=0; i<6; i++) {
	    students[i].print();
	}

}

int main() {
	Q3();
	return 0;
}

Marks for Q3:35
