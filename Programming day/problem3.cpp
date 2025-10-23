#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int city1, city2;
    cout << "Enter the temperature of City 1: ";
    cin >> city1;
    cout << "Enter the temperature of City 2: ";
    cin >> city2;
    double diff= abs(city1 - city2);
    if (diff > 10) {
        cout << "Difference is too Big" << endl;
    } else {
        cout << "Difference is within range" << endl;
    }
    return 0;
}
