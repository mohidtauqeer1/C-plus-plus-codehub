#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    // Prompt the user to enter a score
    cout << "Enter the score (0-100): ";
    cin >> score;

    // Switch statement to assign a grade based on the score
    switch (score / 10) {
        case 0: 
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            grade = 'F'; // For scores 0-59
            break;
        case 6:
            grade = 'D'; // For scores 60-69
            break;
        case 7:
            grade = 'C'; // For scores 70-79
            break;
        case 8:
            grade = 'B'; // For scores 80-89
            break;
        case 9:
        case 10:
            grade = 'A'; // For scores 90-100
            break;
        default:
            cout << "Invalid test score." << endl;
            return 1; // Exit if invalid score
    }

    // Output the grade
    cout << "The grade is: " << grade << endl;

    return 0;
}
