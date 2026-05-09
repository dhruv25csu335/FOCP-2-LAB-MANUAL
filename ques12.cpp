#include<iostream>
using namespace std;
int main() {
    int x,y,z;

    cout << "enter value of side x:"<<endl;
    cin >> x;

    cout << "enter value of side y:"<<endl;
    cin >> y;

    cout<<"enter value of side z:"<<endl;
    cin >> z;

    if(x==y && y==z) {
        cout << "it is a equilateral traingle";
    }
    else if((x==y) && (y=!z) || (x==z) && (y=!z)) {
        cout << "it is a isoceles traingle";
    }
    else{
        cout << "it is a scaelen traingle";
    }
}





#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a) {
        if(a == b && b == c) {
            cout << "The triangle is Equilateral." << endl;
        }
        else if(a == b || b == c || a == c) {
            cout << "The triangle is Isosceles." << endl;
        }
        else {
            cout << "The triangle is Scalene." << endl;
        }
    } else {
        cout << "Invalid triangle! The sum of any two sides must be greater than the third." << endl;
    }

    return 0;
}