#include <iostream>
using namespace std;

int main() {
    int score1, score2, score3;

    cout << "Enter score of Player 1: ";
    cin >> score1;

    cout << "Enter score of Player 2: ";
    cin >> score2;

    cout << "Enter score of Player 3: ";
    cin >> score3;

    if (score1 > score2 && score1 > score3) {
        cout << "Player 1 is the winner!" << endl;
    }
    else if (score2 > score1 && score2 > score3) {
        cout << "Player 2 is the winner!" << endl;
    }
    else if (score3 > score1 && score3 > score2) {
        cout << "Player 3 is the winner!" << endl;
    }
    else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}