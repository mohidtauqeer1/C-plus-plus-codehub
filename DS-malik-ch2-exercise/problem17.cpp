#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float milk, cost, profit;
    int cartons;
    cout << "Enter total milk (liters): ";
    cin >> milk;
    cout << "Enter cost per liter: ";
    cin >> cost;
    cout << "Enter profit per carton: ";
    cin >> profit;
    cartons = ceil(milk / 3.78);
    cout << "Cartons = " << cartons << endl;
    cout << "Cost = " << milk * cost << endl;
    cout << "Profit = " << cartons * profit;
    return 0;
}