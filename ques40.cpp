#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

// Function to trim and remove extra spaces
string normalizeSpaces(const string &input) {
    stringstream ss(input);
    string word, result;
    while (ss >> word) {
        if (!result.empty()) result += " ";
        result += word;
    }
    return result;
}

// Function to convert to sentence case
string toSentenceCase(string str) {
    if (!str.empty()) {
        str[0] = toupper(str[0]);
        for (size_t i = 1; i < str.size(); i++) {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

// Function to validate allowed characters
bool isValid(const string &str) {
    for (char ch : str) {
        if (!(isalnum(ch) || isspace(ch))) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Step 1: Normalize spaces
    string normalized = normalizeSpaces(input);

    // Step 2: Convert to sentence case
    string sentenceCase = toSentenceCase(normalized);

    // Step 3: Count words, digits, special characters
    int wordCount = 0, digitCount = 0, specialCount = 0;
    stringstream ss(sentenceCase);
    string word;
    while (ss >> word) wordCount++;

    for (char ch : sentenceCase) {
        if (isdigit(ch)) digitCount++;
        else if (!isalnum(ch) && !isspace(ch)) specialCount++;
    }

    // Display results
    cout << "\nNormalized String: " << sentenceCase << endl;
    cout << "Total words: " << wordCount << endl;
    cout << "Total digits: " << digitCount << endl;
    cout << "Total special characters: " << specialCount << endl;

    // Step 4: Validation
    if (isValid(sentenceCase)) {
        cout << "Validation: Accepted ✅ (contains only alphabets, digits, and spaces)" << endl;
    } else {
        cout << "Validation: Rejected ❌ (contains invalid characters)" << endl;
    }

    return 0;
}
