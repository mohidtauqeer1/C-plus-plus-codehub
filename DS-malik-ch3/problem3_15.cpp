#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setfill('-');

    cout << left  << setw(10) << "Name" <<left << setw(10) << "Age" << endl;
    cout << left  << setw(10) << "Ali"  <<left << setw(10) << 18 << endl;
    cout << left  << setw(10) << "Sara" <<left << setw(10) << 20 << endl;

    return 0;
}
