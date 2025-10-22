#include <iostream>
using namespace std;

int main() {
    float price, markup, taxRate, markedPrice, tax, finalPrice;
    cout << "Enter original price: ";
    cin >> price;
    cout << "Enter markup %: ";
    cin >> markup;
    cout << "Enter tax %: ";
    cin >> taxRate;

    markedPrice = price + (price * markup / 100);
    tax = markedPrice * taxRate / 100;
    finalPrice = markedPrice + tax;

    cout << "Final Price = " << finalPrice;
    return 0;
}
