#include <iostream>
using namespace std;

int main()
{
    float c, f;
    int choice;

    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> c;
        f = (c * 9/5) + 32;
        cout << "Temperature in Fahrenheit = " << f;
    }
    else if(choice == 2)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> f;
        c = (f - 32) * 5/9;
        cout << "Temperature in Celsius = " << c;
    }
    else
    {
        cout << "Invalid choice";
    }

    return 0;
}