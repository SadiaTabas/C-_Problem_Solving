
 #include <iostream>

using namespace std;

int main() {

    string name[10], occupation[10];
    int nid[10], age[10];
    double balance[10];


    double monthlyInterest = 6.5 / 100;


    cout << "Enter details of 10 customers:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nCustomer " << (i + 1) << ":\n";
        cout << "Name: ";
        cin >> name[i];
        cout << "NID: ";
        cin >> nid[i];
        cout << "Age: ";
        cin >> age[i];
        cout << "Occupation: ";
        cin >> occupation[i];
        cout << "Account Balance: ";
        cin >> balance[i];
    }


    cout << "\nCustomer Account Details and Future Balances:\n";
    for (int i = 0; i < 10; i++) {

        double annualBalance = balance[i];
        for (int j = 0; j < 12; j++) {
            annualBalance += annualBalance * monthlyInterest;
        }


        double balanceAfter10Years = balance[i];
        for (int j = 0; j < 120; j++) {
            balanceAfter10Years += balanceAfter10Years * monthlyInterest;
        }


        cout << "\nCustomer " << (i + 1) << ":\n";
        cout << "Name: " << name[i] << "\n";
        cout << "NID: " << nid[i] << "\n";
        cout << "Age: " << age[i] << "\n";
        cout << "Occupation: " << occupation[i] << "\n";
        cout << "Initial Balance: " << balance[i] << " tk\n";
        cout << "Balance after 1 year: " << annualBalance << " tk\n";
        cout << "Balance after 10 years: " << balanceAfter10Years << " tk\n";
    }

    return 0;
}
