#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows for Pascal's Triangle: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int value = 1;  // first value in each row is always 1

        // Print leading spaces for alignment
        for (int space = 0; space < rows - i - 1; space++) {
            cout << "  ";
        }

        // Print values in the row
        for (int j = 0; j <= i; j++) {
            cout << value << "   ";
            // Update value using iterative relation
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}
