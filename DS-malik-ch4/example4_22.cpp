#include <iostream>
using namespace std;

int main() {
    char grade;

    // Prompt the user to enter the grade
    cout << "Enter the grade: ";
    cin >> grade;

    // Switch statement to determine the grade point
    switch (grade) {
        case 'A':
            cout << "The grade point is 4.0." << endl;
            break;
        case 'B':
            cout << "The grade point is 3.0." << endl;
            break;
        case 'C':
            cout << "The grade point is 2.0." << endl;
            break;
        case 'D':
            cout << "The grade point is 1.0." << endl;
            break;
        case 'F':
            cout << "The grade point is 0.0." << endl;
            break;
        default:
            cout << "The grade is invalid." << endl;
            break;
    }

    return 0;
}
