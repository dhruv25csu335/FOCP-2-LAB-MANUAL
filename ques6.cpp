#include <iostream>
using namespace std;

int main() {
    int n;
    double basicSalary, bonus, netSalary;

    cout << "Enter number of employees: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "\nEmployee :" << i << endl;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        bonus = basicSalary * 0.12;
        netSalary = basicSalary + bonus;

        cout << "Bonus (12%): " << bonus << endl;
        cout << "Net Salary: " << netSalary << endl;
    }

    return 0;
}