#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if(a == 0) {
        cout << "Not a quadratic equation. 'a' must be non-zero." << endl;
        return 0;
    }

    double discriminant = b*b - 4*a*c;

    if(discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and distinct: " << root1 << " , " << root2 << endl;
    }
    else if(discriminant == 0) {
        double root = -b / (2*a);
        cout << "Roots are real and equal: " << root << endl;
    }
    else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex: " << realPart << " + " << imagPart << "i , "
             << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}