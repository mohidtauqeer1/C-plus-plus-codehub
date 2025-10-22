#include <iostream>
using namespace std;
int main() {
    int shares;
    float buy, sell, invest, value, charge, net;
    cout << "Enter number of shares, buy price, sell price: ";
    cin >> shares >> buy >> sell;
    invest = shares * buy;
    value = shares * sell;
    charge = (invest + value) * 0.015;
    net = value - charge;
    if (net > invest)
        cout << "Profit = " << net - invest;
    else
        cout << "Loss = " << invest - net;
    return 0;
}