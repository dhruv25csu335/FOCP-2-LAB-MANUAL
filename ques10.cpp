#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year. February has 29 days." << endl;
    } else {
        cout << year << " is not a Leap Year. February has 28 days." << endl;
    }

    return 0;
}