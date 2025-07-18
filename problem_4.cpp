#include <iostream>

using namespace std;

int main() {

    string S_name[10], S_Department[10];
    int S_ID[10], S_age[10];
    double GP[10][5];
    double SGPA[10];
    double CGPA[10];


    cout << "Enter details of 10 students:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nStudent " << (i + 1) << ":\n";
        cout << "Name: ";
        cin >> S_name[i];
        cout << "ID: ";
        cin >> S_ID[i];
        cout << "Age: ";
        cin >> S_age[i];
        cout << "Department: ";
        cin >> S_Department[i];


        cout << "Enter Grade Points (GP) of 5 courses: ";
        double totalGP = 0;
        for (int j = 0; j < 5; j++) {
            cin >> GP[i][j];
            totalGP += GP[i][j];
        }


        SGPA[i] = totalGP / 5;


        cout << "Enter CGPA (Cumulative GPA for 4 years): ";
        cin >> CGPA[i];
    }


    cout << "\nStudent Academic Details and Scholarship Eligibility:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nStudent " << (i + 1) << ":\n";
        cout << "Name: " << S_name[i] << "\n";
        cout << "ID: " << S_ID[i] << "\n";
        cout << "Age: " << S_age[i] << "\n";
        cout << "Department: " << S_Department[i] << "\n";
        cout << "SGPA: " << SGPA[i] << "\n";
        cout << "CGPA: " << CGPA[i] << "\n";


        if (SGPA[i] >= 3.75) {
            cout << "Eligible for 25% Waiver\n";
        } else {
            cout << "Not Eligible for Waiver\n";
        }
    }

    return 0;
}
