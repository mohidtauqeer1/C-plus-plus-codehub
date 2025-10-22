#include <iostream>
using namespace std;

int main() {
    float givenSize, actualSize;
    cout << "Enter hard drive size (GB): ";
    cin >> givenSize;
    actualSize = givenSize * 1000 * 1000 * 1000;
    actualSize = actualSize / (1024 * 1024 * 1024);
    cout << "Actual size = " << actualSize << " GB";
    return 0;
}
