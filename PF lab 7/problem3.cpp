#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "enter number of days: ";
    cin >> days;
    int doctors = 7;
    int treated = 0;
    int untreated = 0;
    for (int i = 1; i <= days; i++) {
        int patients;
        cout << "enter number of patients for day " << i << ": ";
        cin >> patients;
        if (i % 3 == 0 && untreated > treated) {
            doctors++;
        }

        if (patients <= doctors) {
            treated += patients;
        } else {
            treated += doctors;
            untreated += (patients - doctors);
        }
    }
    cout << "\ntreated patients: " << treated << endl;
    cout << "untreated patients: " << untreated << endl;
    return 0;
}
