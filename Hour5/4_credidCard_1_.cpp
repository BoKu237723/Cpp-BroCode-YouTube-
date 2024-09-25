#include <iostream>
using namespace std;

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main() {
    string cardNumber;
    cout << "Enter a credit card number: ";
    cin >> cardNumber;

    int result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0) {
        cout << cardNumber << " is valid." << endl;
    } else {
        cout << cardNumber << " is not valid." << endl;
    }
    return 0;
}

int getDigit(const int number) {
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const string cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0'; // Convert char to int
    }
    return sum; // Make sure to return the sum
}

int sumEvenDigits(const string cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        sum += getDigit((cardNumber[i] - '0') * 2); // Convert char to int and process
    }
    return sum; // Make sure to return the sum
}
