#include <iostream>
using namespace std;

int main() {
    float capacity, milesPerGallon, totalMiles;
    cout << "Enter tank capacity (gallons): ";
    cin >> capacity;
    cout << "Enter miles per gallon: ";
    cin >> milesPerGallon;
    totalMiles = capacity * milesPerGallon;
    cout << "Miles without refuel = " << totalMiles;
    return 0;
}
