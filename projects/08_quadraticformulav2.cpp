#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double a, b, c;

    cout << "Quadratic Formula Calculator v2 => This time with Complex Roots!" << '\n';
    cout << "Equation Format = ax^2 + bx + c = 0" << '\n';

    cout << "Enter value of 'a' variable:" << '\n';
    cin >> a;

    cout << "Enter value of 'b' variable:" << '\n';
    cin >> b;

    cout << "Enter value of 'c' variable:" << '\n';
    cin >> c;
    if (a == 0) {
        cout << "This is not a quadratic equation because a = 0." << '\n';
        return 0;
    }

    double D = b * b - 4 * a * c;
    cout << "Discriminant D = " << D << '\n';

    if (D > 0) {
        double root1 = (-b + sqrt(D)) / (2 * a);
        double root2 = (-b - sqrt(D)) / (2 * a);
       
        cout << "Your equation has 2 real roots:" << '\n';
        cout << "x = " << root1 << '\n';
        cout << "x = " << root2 << '\n';
        return 0;
    }

    else if (D == 0) {

        double root = -b / (2 * a);
        cout << "Your equation has one repeated real root: " << '\n';
        cout << "x = " << root << '\n';
        return 0;
    }

    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-D) / (2 * a);

        cout << "There are two complex roots: " << '\n';
        cout << "x = " << realPart << " + " << imaginaryPart << "i" << '\n';
        cout << "x = " << realPart << " - " << imaginaryPart << "i" << '\n';
    }
 return 0;
}