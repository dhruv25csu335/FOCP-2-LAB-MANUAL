#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &id) {
    int start = 0;
    int end = id.length() - 1;

    while(start < end) {
        if(id[start] != id[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string id;
    cout << "Enter ID: ";
    cin >> id;

    if(isPalindrome(id))
        cout << id << " is a Palindrome." << endl;
    else
        cout << id << " is not a Palindrome." << endl;

    return 0;
}