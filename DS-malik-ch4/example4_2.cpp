#include <iostream>
using namespace std;

int main() {
    int score;
    char grade = 'F';

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 60)
        grade = 'P';

    cout << "Your grade is: " << grade << endl;

    return 0;
}
