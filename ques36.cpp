
#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;

    // Input dimensions
    cout << "Enter rows and columns of first matrix (m n): ";
    cin >> m >> n;
    cout << "Enter rows and columns of second matrix (p q): ";
    cin >> p >> q;

    // Check multiplication validity
    if (n != p) {
        cout << "Matrix multiplication not possible ❌" << endl;
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    // Input first matrix
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize result matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Perform multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
