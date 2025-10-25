#include <iostream>
using namespace std;
int main() {
    int age, moves;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the number of times you've moved: ";
    cin >> moves;
    double average = static_cast<double>(age) / (moves + 1);
    cout << "\nYou have lived an average of " << average << " years in each house." << endl;
    return 0;
}
