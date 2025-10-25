#include <iostream>
using namespace std;

int main() {
    string name1, name2, name3;
    int age1, age2, age3;
    cout << "Enter name and age of first brother: ";
    cin >> name1;
    cout << "age of first brother: ";
    cin >> age1;

    cout << "Enter name of second brother: ";
    cin >> name2;
    cout << "Enter age of first brother: ";
    cin >> age2;

    cout << "Enter name of third brother: ";
    cin >> name3;
    cout << "Enter age of first brother: ";
    cin >> age1;
    if (age1 < age2 && age1 < age3) {
        cout << "The youngest brother is: " << name1 << endl;
    }
     if (age2 < age1 && age2 < age3) {
        cout << "The youngest brother is: " << name2 << endl;
    }
    if (age3 < age1 && age3 < age2) {
        cout << "The youngest brother is: " << name3 << endl;
    }

    return 0;
}