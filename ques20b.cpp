#include <iostream>
using namespace std;

int main() {
    int maxSeats = 5;

    for(int row = 0; row < maxSeats; row++) {
        for(int seat = maxSeats; seat > row; seat--) {
            cout << seat << " ";
        }
        cout << endl;
    }

    return 0;
}