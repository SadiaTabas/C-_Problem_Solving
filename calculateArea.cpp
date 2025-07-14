#include <iostream>
using namespace std;


double Rectangle(double l , double w) {
    return l * w;
}


double Square(double side) {
    return side * side;
}


double Rhombus(double a, double b) {
    return 0.5 * a * b;
}


double Parallelogram(double b, double h) {
    return b * h;
}


double Trapezoid(double b1, double b2, double height) {
    return 0.5 * (b1 + b2) * height;
}

int main() {
    int choice;
    cout << "1. Rectangle\n2. Square\n3. Rhombus\n4. Parallelogram\n5. Trapezoid\n";
    cout << "Enter your choice: ";
    cin >> choice;

    double area = 0;

    switch(choice) {
        case 1: {
            double l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            area = Rectangle(l, w);
            break;
        }
        case 2: {
            double side;
            cout << "Enter the side length: ";
            cin >> side;
            area = Square(side);
            break;
        }
        case 3: {
            double a, b;
            cout << "Enter the lengths of diagonals: ";
            cin >> a >> b;
            area = Rhombus(a, b);
            break;
        }
        case 4: {
            double b, h;
            cout << "Enter base and height: ";
            cin >> b >> h;
            area =Parallelogram(b, h);
            break;
        }
        case 5: {
            double b1, b2, height;
            cout << "Enter base1, base2, and height: ";
            cin >> b1 >> b2 >> height;
            area = Trapezoid(b1, b2, height);
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    cout << "The area is: " << area << endl;

    return 0;
}
