#include <iostream>
using namespace std;
int main() {
    float rate, hours, gross, net, clothes, supplies, bonds, parents;
    cout << "Enter hourly rate and hours per week: ";
    cin >> rate >> hours;
    gross = rate * hours * 5;
    net = gross - (gross * 0.14);
    clothes = net * 0.10;
    supplies = net * 0.01;
    bonds = (net - clothes - supplies) * 0.25;
    parents = bonds * 0.50;
    cout << "Gross = " << gross << endl;
    cout << "Net = " << net << endl;
    cout << "Clothes = " << clothes << endl;
    cout << "Supplies = " << supplies << endl;
    cout << "Bonds = " << bonds << endl;
    cout << "Parents Bonds = " << parents;
 return 0;
}