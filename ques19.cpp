#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int lower, upper;

    cout << "Enter lower bound of range: ";
    cin >> lower;
    cout << "Enter upper bound of range: ";
    cin >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are: " << endl;

    for(int n = lower; n <= upper; n++) {
        if(isPrime(n))
            cout << n << " ";
    }

    cout << endl;
    return 0;
}