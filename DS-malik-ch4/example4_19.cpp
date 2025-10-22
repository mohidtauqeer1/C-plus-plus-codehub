#include <iostream>
using namespace std;

int main() {
    int temperature = 75; // You can change this value to test

    if (temperature >= 70)                  // Line 1
        if (temperature >= 80)              // Line 2
            cout << "Good day for swimming." << endl;  // Line 3
        else
            cout << "Good day for golfing." << endl;   // Line 5

    return 0;
}
