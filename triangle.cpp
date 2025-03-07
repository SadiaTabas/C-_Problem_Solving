#include <iostream>
#include <cmath>

using namespace std;


double area(double base, double height) {
    return (0.5 * base * height);
}


double areaThreeSides(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double base, height, a, b, c;


    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area using base and height: " << area(base, height) << endl;


    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    cout << "Area using three sides: " << areaThreeSides(a, b, c) << endl;

    return 0;
}
