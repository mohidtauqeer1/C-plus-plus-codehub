#include <iostream>
#include <string>
using namespace std;

int main() {
    string country;
    cout << "Which country do you live in? ";
    cin >> country;
    if (country == "germany" || country == "australia") {
    } else {
        cout << "You should come to visit these sometime!" << endl;
    }
    return 0;
}