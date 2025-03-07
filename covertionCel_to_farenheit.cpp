
#include <iostream>
using namespace std;

void CelsiusToFahrenheit(double celsius) {
    double fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit." << endl;
}

void FahrenheitToCelsius(double fahrenheit) {
    double celsius = (fahrenheit - 32) * 5/9;
    cout << fahrenheit << " Fahrenheit is " << celsius << " Celsius." << endl;
}

int main() {
    double temperature;
    int choice;

    cout << "Temperature Conversion Menu: \n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        CelsiusToFahrenheit(temperature);
    }
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        FahrenheitToCelsius(temperature);
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
