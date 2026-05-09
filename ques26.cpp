#include <iostream>
using namespace std;

int main() {
    float marks[5];
    float total = 0, percentage;

    cout << "Enter marks for 5 subjects:\n";

    for(int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = total / 5;

    cout << "\nTotal Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}