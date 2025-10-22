#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e, sum;
    int result;
    cout << "Enter 5 numbers: ";
    cin >> a >> b >> c >> d >> e;
    sum = a + b + c + d + e;
    result = sum + 0.5;
    cout << "Result = " << result;
    return 0;
}
