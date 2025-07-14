 #include <iostream>
using namespace std;


bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


void LeapYears(int i, int j) {
    bool flag = false;
    cout << "Leap years between " << i<< " and " << j << ":\n";

    for (int year = i; year <= j; year++) {
        if (isLeapYear(year)) {
            cout << year << " ";
            flag = true;
        }
    }

    if (!flag) {
        cout << "No leap years found!";
    }
    cout << endl;
}

int main() {
    int i, j;
    cout << "Enter the start year: ";
    cin >> i;
    cout << "Enter the end year: ";
    cin >> j;

    if (i > j) {
        cout << "Invalid! " << endl;
    } else {
        LeapYears(i, j);
    }

    return 0;
}
