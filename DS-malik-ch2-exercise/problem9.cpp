#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e, avg;
    cout << "Enter 5 test scores: ";
    cin >> a >> b >> c >> d >> e;
    avg = (a + b + c + d + e) / 5;
    cout << "Average = " << avg;
    return 0;
}
