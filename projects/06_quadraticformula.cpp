#include <iostream>
#include <cmath>

int main () {
    double Avariable;
    double Bvariable;
    double Cvariable;

    std::cout << "Enter value of a variable: " << '\n';
    std::cin >> Avariable;

    std::cout << "Enter value of b variable: " << '\n';
    std::cin >> Bvariable;

    std::cout << "Enter value of c variable: " << '\n';
    std::cin >> Cvariable;

    double discriminant = Bvariable * Bvariable - 4 * Avariable * Cvariable;
        if (discriminant < 0) {
        std::cout << "No real roots; answers are imaginary or complex.";
        return 0;
    }
    double rootOne = (-Bvariable + sqrt(discriminant)) / (2 * Avariable);
    double rootTwo = (-Bvariable - sqrt(discriminant)) / (2* Avariable);

    std::cout << "postitive/plus root: " << rootOne << '\n';
    std::cout << "negative/minus root: " << rootTwo << '\n';


return 0;
}