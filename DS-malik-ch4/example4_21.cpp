#include <iostream>
using namespace std;

int main() {
    int age = 25;
    char grade = 'B';
    int x = 10;

    // Line 1: (age >= 21) || (x == 5)
    // This will evaluate the first condition (age >= 21) and not the second condition if the first is true.
    if ((age >= 21) || (x == 5)) {
        cout << "Line 1: The condition is true." << endl;
    } else {
        cout << "Line 1: The condition is false." << endl;
    }

    // Line 2: (grade == 'A') && (x >= 7)
    // This will evaluate the first condition (grade == 'A') and not the second condition if the first is false.
    if ((grade == 'A') && (x >= 7)) {
        cout << "Line 2: The condition is true." << endl;
    } else {
        cout << "Line 2: The condition is false." << endl;
    }

    return 0;
}
