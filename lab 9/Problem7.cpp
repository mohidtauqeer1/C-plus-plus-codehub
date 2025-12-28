#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> danceMoves = 
{
    "Shimmy", "Shake", "Pirouette", "Slide", "Box Step",
    "Headspin", "Dosado", "Pop", "Lock", "Arabesque"
};
bool isValidPin(const string& pin) 
{
    if (pin.length() != 4) return false;
    for (char c : pin) {
        if (!isdigit(c)) return false;
    }
    return true;
}
void danceConvert(const string& pin) 
{
    if (!isValidPin(pin)) {
        cout << "Invalid input." << endl;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int digit = pin[i] - '0';
        int index = (digit + i) % 10;
        cout << danceMoves[index];
        if (i < 3) cout << ", ";
    }
    cout << endl;
}
int main() 
{
    string pin;
    cout << "Enter 4-digit PIN: ";
    cin >> pin;

    danceConvert(pin);
    return 0;
}