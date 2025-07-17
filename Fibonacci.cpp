
#include <iostream>
using namespace std;

int main() {
    int house_Numbers[20];
    house_Numbers[0] = 0;
    house_Numbers[1] = 1;


    for (int i = 2; i < 20; i++) {
        house_Numbers[i] = house_Numbers[i - 1] + house_Numbers[i - 2];
    }


    cout << "First 20 house numbers: ";
    for (int i = 0; i < 20; i++) {
        cout << house_Numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
