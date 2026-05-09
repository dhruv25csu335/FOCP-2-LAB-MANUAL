#include <iostream>
using namespace std;

int main() {
    int rows = 3;    // Number of times to repeat the row
    int cols = 5;    // Numbers in each row

    for(int i = 0; i < rows; i++) {
        for(int j = 1; j <= cols; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}