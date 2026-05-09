#include <iostream>
#include <string>
using namespace std;

bool isValidUsername(const string &username) {
    for (char ch : username) {
        // Accept only alphabets (A-Z, a-z) and digits (0-9)
        if (!isalnum(ch)) {
            return false; // Reject if space or special character found
        }
    }
    return true;
}

int main() {
    string username;
    cout << "Enter a username: ";
    cin >> username;  // cin stops at space, so spaces are auto rejected

    if (isValidUsername(username)) {
        cout << "✅ Username accepted" << endl;
    } else {
        cout << "❌ Invalid username (contains space or special character)" << endl;
    }

    return 0;
}
