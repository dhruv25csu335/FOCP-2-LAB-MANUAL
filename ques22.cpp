#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    // Upper half
    for(int i = 0; i < n; i++) {
        // Spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Stars and hollow spaces
        for(int j = 0; j < 2 * i + 1; j++) {
            if(j == 0 || j == 2 * i || i == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // Lower half
    for(int i = n - 2; i >= 0; i--) {
        // Spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Stars and hollow spaces
        for(int j = 0; j < 2 * i + 1; j++) {
            if(j == 0 || j == 2 * i || i == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}