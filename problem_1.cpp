
#include <iostream>
using namespace std;

void minNotes(int amount, int notes[], int size) {
    cout << "Minimum notes required:\n";
    for (int i = 0; i < size; i++) {
        if (amount >= notes[i]) {
            int count = amount / notes[i];
            cout << notes[i] << " Taka: " << count << endl;
            amount -= count * notes[i];
        }
    }
}

int main() {
    int amount = 2887;
    int notes[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2};
    int size = sizeof(notes) / sizeof(notes[0]);

    minNotes(amount, notes, size);

    return 0;
}
