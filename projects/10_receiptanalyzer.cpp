#include <iostream>
#include <vector>

int main () {
    // Replace these prices with your own values
    std::vector<double> prices = { 1.97, 1.97, 2.91, 14.99 };
    double subTotal = 0.0;
    for (double price : prices) {
    subTotal += price;
    }
    // Replace the tax rate with your own value (write as decimal, not percentage)
    const double taxRate = 0.12;
    double taxAmount = subTotal * taxRate;
    double total = subTotal + taxAmount;
    double average = subTotal / prices.size();

    std::cout << "Subtotal: $" << subTotal << "\n";
    std::cout << "Tax: $" << taxAmount << "\n";
    std::cout << "Total: $" << total << "\n";
    std::cout << "Average: $" << average << "\n";

    for (double price : prices) {
    if (price > average) {
        std::cout << "$" << price << " is above average.\n";
    } else if (price < average) {
        std::cout << "$" << price << " is below average.\n";
    } else {
        std::cout << "$" << price << " equals the average.\n";
    }
}
    return 0;
}