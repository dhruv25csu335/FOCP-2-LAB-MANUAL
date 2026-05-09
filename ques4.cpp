#include <iostream>
using namespace std;

int main()
{
    int itemNo, quantity;
    float unitPrice, amount, discount, finalBill;

    cout << "Enter Item Number: ";
    cin >> itemNo;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Unit Price: ";
    cin >> unitPrice;

    amount = quantity * unitPrice;
    discount = amount * 0.20;
    finalBill = amount - discount;

    cout << "\nItem Number: " << itemNo;
    cout << "\nTotal Amount: " << amount;
    cout << "\nDiscount (20%): " << discount;
    cout << "\nFinal Bill Amount: " << finalBill;

    return 0;
}