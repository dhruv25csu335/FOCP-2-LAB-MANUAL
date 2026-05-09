#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int lower, upper;

    cout << "Enter lower limit: ";
    cin >> lower;
    cout << "Enter upper limit: ";
    cin >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are:\n";

    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}





//#include <iostream>
#include <string>
using namespace std;

bool isValidPassword(string password) {
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    string specialChars = "@#$%!&*";

    for (int i = 0; i < password.length(); i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            hasUpper = true;
        else if (password[i] >= 'a' && password[i] <= 'z')
            hasLower = true;
        else if (password[i] >= '0' && password[i] <= '9')
            hasDigit = true;
        else if (specialChars.find(password[i]) != string::npos)
            hasSpecial = true;
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    string password;

    cout << "Enter password: ";
    cin >> password;

    if (isValidPassword(password))
        cout << "Password is Strong and Valid.\n";
    else
        cout << "Password is Invalid. It must contain:\n"
             << "- At least one uppercase letter\n"
             << "- At least one lowercase letter\n"
             << "- At least one digit\n"
             << "- At least one special character (@ # $ % ! & *)\n";

    return 0;
}//