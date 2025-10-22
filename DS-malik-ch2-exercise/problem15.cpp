#include <iostream>
using namespace std;

int main() {
    const float PI = 3.141593;
    float r, area;
    cout << "Enter radius: ";
    cin >> r;
    area = PI * r * r;
    cout << "Area = " << area;
    return 0;
}
