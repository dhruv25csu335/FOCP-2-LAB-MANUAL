#include <iostream>
using namespace std;

int main() {
    int width = 8;
    int height = 13;

    for(int row = 1; row <= height; row++) {
        for(int col = 1; col <= width; col++) {
            if(row == 1 || row == height) {
                cout << "*";
            } else {
                if(col == 1 || col == width)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}