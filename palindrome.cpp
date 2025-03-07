
#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int newNum = 0;

    while (num > 0) {
        int digit = num % 10;
        newNum = newNum * 10 + digit;
        num /= 10;
    }

    return original == newNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << num << " is a palindrome!" << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
