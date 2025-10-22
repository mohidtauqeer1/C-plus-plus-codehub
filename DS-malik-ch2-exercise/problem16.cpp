#include <iostream>
using namespace std;

int main() {
    float totalMilk, cartons, cost, profit;
    cout << "Enter total milk in liters: ";
    cin >> totalMilk;
    cartons = totalMilk / 3.78;
    int needed = (int)(cartons + 0.5); // round

    cost = totalMilk * 0.38;
    profit = needed * 0.27;

    cout << "Cartons needed = " << needed << endl;
    cout << "Cost = " << cost << endl;
    cout << "Profit = " << profit;
    return 0;
}
