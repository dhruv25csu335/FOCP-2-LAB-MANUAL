#include <iostream>
using namespace std;

int main() {
    int quantity;
    double unitPrice, totalAmount, discount = 0.0, finalAmount;

    cout << "Enter quantity of items: ";
    cin >> quantity;

    cout << "Enter unit price: ";
    cin >> unitPrice;

    totalAmount = quantity * unitPrice;

    if(quantity > 1000) {
        discount = totalAmount * 0.10;
    }

    finalAmount = totalAmount - discount;

    cout << "\nTotal Amount: " << totalAmount << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount to Pay: " << finalAmount << endl;

    return 0;
}