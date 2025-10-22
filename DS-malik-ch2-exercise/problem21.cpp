#include <iostream>
using namespace std;
int main() {
    float m1, m2, d, F;
    const float k = 6.67e-8;
    cout << "Enter masses and distance: ";
    cin >> m1 >> m2 >> d;
    F = k * (m1 * m2) / (d * d);
    cout << "Force = " << F;
    return 0;
}