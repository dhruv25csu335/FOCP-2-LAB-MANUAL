#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int largest, secondLargest;

    // Input 5 stock values
    cout << "Enter 5 stock values: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Initialize largest and secondLargest
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Traverse remaining elements
    for (int i = 2; i < 5; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest stock value: " << largest << endl;
    cout << "Second largest stock value: " << secondLargest << endl;

    return 0;
}
