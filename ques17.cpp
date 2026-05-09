#include <iostream>
#include <cmath>
using namespace std;

// Function to check Perfect Number
bool isPerfect(int n) {
    int sum = 0;
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }
    return sum == n;
}

// Function to check Armstrong Number
bool isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;
    int temp = n;

    // Count digits
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if(isPerfect(number))
        cout << number << " is a Perfect Number." << endl;
    else
        cout << number << " is not a Perfect Number." << endl;

    if(isArmstrong(number))
        cout << number << " is an Armstrong Number." << endl;
    else
        cout << number << " is not an Armstrong Number." << endl;

    return 0;
}