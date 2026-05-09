#include <iostream>
using namespace std;

int main() {
    int n;
    double sales, maxSales;

    cout << "Enter the number of sales entries: ";
    cin >> n;

    if(n <= 0) {
        cout << "Invalid number of entries!" << endl;
        return 0;
    }

    cout << "Enter sales figure 1: ";
    cin >> sales;
    maxSales = sales;

    for(int i = 2; i <= n; i++) {
        cout << "Enter sales figure " << i << ": ";
        cin >> sales;
        if(sales > maxSales) {
            maxSales = sales;
        }
    }

    cout << "\nThe maximum sales figure is: " << maxSales << endl;

    return 0;
}