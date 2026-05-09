#include <iostream>
using namespace std;

int main() {
    float prices[10];
    float maxPrice;

    cout << "Enter prices of 10 items:\n";

    // Input prices
    for(int i = 0; i < 10; i++) {
        cout << "Item " << i + 1 << ": ";
        cin >> prices[i];
    }

    // Assume first element is maximum
    maxPrice = prices[0];

    // Find maximum price
    for(int i = 1; i < 10; i++) {
        if(prices[i] > maxPrice) {
            maxPrice = prices[i];
        }
    }

    cout << "\nMaximum Price = " << maxPrice << endl;

    return 0;
}