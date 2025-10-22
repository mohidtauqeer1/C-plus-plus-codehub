#include <iostream>
using namespace std;
int main() {
    float cost, minP, maxP, minC, maxC;
    cout << "Enter cost of car: ";
    cin >> cost;
    minP = cost + 200;
    maxP = cost + 2000;
    minC = 20 + 0.3 * (minP - cost);
    maxC = 20 + 0.3 * (maxP - cost);
    cout << "Commission range = " << minC << " to " << maxC;
    return 0;
}