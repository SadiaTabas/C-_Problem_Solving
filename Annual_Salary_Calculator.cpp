

#include <iostream>

using namespace std;

int main() {
    double initialbalance = 100000.0;
    double interestRate = 6.5/100;
    int years = 6;

    cout << "Initial Balance: " << initialbalance << " Tk" << endl;

    for (int i = 1; i <= years; i++) {
        initialbalance += initialbalance * interestRate;
        cout << i << "\t" << initialbalance << " Tk" << endl;
    }

    cout << "\nAnnual Balance after " << years << " years: " << initialbalance << " Tk" << endl;

    return 0;
}
