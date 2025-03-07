#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void findPrimes(int st, int en) {
    int sum = 0, count = 0;
    double average;

    cout << "Prime numbers between " << st << " and " << en << ": ";
    for (int i = st; i <= en; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            sum += i;
            count++;
        }
    }

    cout << "\nSum of prime numbers: " << sum;

    if (count > 0) {
        average = (double)sum / count;
        cout << "\nAverage of prime numbers: " << average << endl;
    } else {
        cout << "\nNo prime number found" << endl;
    }
}

int main() {
    findPrimes(1, 100);
    return 0;
}

