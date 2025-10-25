#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;
    char lower = tolower(ch);
    if (ch >= '0' && ch <= '9') {
        cout << "It is a number." << endl;
    }
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
        cout << "It is a vowel." << endl;
    }
    if ((lower >= 'a' && lower <= 'z') &&
        !(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')) {
        cout << "It is a consonant." << endl;
    }
    return 0;
}