#include <iostream>
using namespace std;

int main() {
    int temperature;

    // Get temperature from user
    cout << "Enter the temperature: ";
    cin >> temperature;

    // Suggest an activity based on temperature
    if (temperature >= 50) {
        if (temperature >= 80)
            cout << "Good day for swimming." << endl;
        else
            cout << "Good day for golfing." << endl;
    } else {
        cout << "Good day to play tennis." << endl;
    }

    return 0;
}
