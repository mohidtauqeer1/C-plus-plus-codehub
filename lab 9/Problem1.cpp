#include <iostream>
using namespace std;
bool EvenLength(string s) {
    return s.length() % 2 == 0; 
}
int main() {
    string st;
    cout << "Enter a string: ";
    cin >> st;
    if(EvenLength(st))
        cout << "true";
    else
        cout << "false";
    return 0;
}