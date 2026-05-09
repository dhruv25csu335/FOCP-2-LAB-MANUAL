#include <iostream>
using namespace std;

int main() {
    float temp[30];
    float minTemp;

    cout << "Enter temperatures for 30 days:\n";

    // Input temperatures
    for(int i = 0; i < 30; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> temp[i];
    }

    // Assume first day's temperature is minimum
    minTemp = temp[0];

    // Find minimum temperature
    for(int i = 1; i < 30; i++) {
        if(temp[i] < minTemp) {
            minTemp = temp[i];
        }
    }

    cout << "\nMinimum Temperature for the Month = " << minTemp << endl;

    return 0;
}