#include <iostream>
using namespace std;

int main() {
    char gender = 'M'; // 'M' or 'F'
    int age = 25;      // Change age to test different paths
    double policyRate;

    if (gender == 'M')                      // Line 1
        if (age < 21)                       // Line 2
            policyRate = 0.05;              // Line 3
        else                                // Line 4
            policyRate = 0.35;              // Line 5
    else if (gender == 'F')                // Line 6
        if (age < 21)                       // Line 7
            policyRate = 0.04;              // Line 8
        else                                // Line 9
            policyRate = 0.30;              // Line 10

    cout << "Policy rate: " << policyRate << endl;
    return 0;
}
