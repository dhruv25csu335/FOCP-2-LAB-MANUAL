#include <iostream>
using namespace std;

int main() {
    int A[3][3], Transpose[3][3];

    // Input matrix
    cout << "Enter elements of 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    // Compute transpose
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Transpose[j][i] = A[i][j];
        }
    }

    // Display transpose
    cout << "\nTranspose of the matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << Transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
