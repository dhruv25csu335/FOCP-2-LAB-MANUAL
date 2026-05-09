#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int count = 0;

    // Input 5 elements
    cout << "Enter 5 defect codes: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Check divisibility by both 3 and 5
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0) {
            count++;
        }
    }

    // Output result
    cout << "Numbers divisible by both 3 and 5: " << count << endl;

    return 0;
}
