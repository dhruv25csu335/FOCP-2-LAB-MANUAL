#include <iostream>
using namespace std;

int main() {
    float salary[10];
    float total = 0, average;

    cout << "Enter salaries of 10 employees:\n";

    // Input salaries
    for(int i = 0; i < 10; i++) {
        cout << "Employee " << i + 1 << ": ";
        cin >> salary[i];
        total += salary[i];
    }

    // Calculate average
    average = total / 10;

    // Display results
    cout << "\nTotal Salary = " << total << endl;
    cout << "Average Salary = " << average << endl;

    return 0;
}