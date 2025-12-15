#include <iostream>
#include <string>
using namespace std;

int main() {
    string colors[5] = {"Red", "Black", "Brown", "Blue", "Grey"};
    string brands[5] = {"Suzuki", "Toyota", "Nissan", "BMW", "Audi"};
    int carData[5][5] = {{10,  7, 12, 10,  4},{18, 11, 15, 17,  2},{23, 19, 12, 16, 14},{ 7, 12, 16,  0,  2},{ 3,  5,  6,  2,  1} };
    cout << "\t\tCar Quantities Table\n\n";
    cout << "\t";
    for (int c = 0; c < 5; c++) {
        cout << colors[c] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << brands[i] << "\t";
        for (int j = 0; j < 5; j++) {
            cout << carData[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
