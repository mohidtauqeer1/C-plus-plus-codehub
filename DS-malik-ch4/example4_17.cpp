#include <iostream>
using namespace std;

int main() {
    int score;

    // Get score from user
    cout << "Enter the score: ";
    cin >> score;

    // Determine and display the grade
    if (score >= 90)
        cout << "The grade is A." << endl;
    else if (score >= 80)
        cout << "The grade is B." << endl;
    else if (score >= 70)
        cout << "The grade is C." << endl;
    else if (score >= 60)
        cout << "The grade is D." << endl;
    else
        cout << "The grade is F." << endl;

    return 0;
}
