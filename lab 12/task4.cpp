#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    bool isIdentity = true;

    // Input the 3x3 matrix
    cout << "Enter elements of 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Check for identity matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && matrix[i][j] != 1) {
                isIdentity = false; // diagonal elements must be 1
            }
            else if (i != j && matrix[i][j] != 0) {
                isIdentity = false; // non-diagonal elements must be 0
            }
        }
    }

    // Output result
    if (isIdentity) {
        cout << "The matrix is an identity matrix.\n";
    } else {
        cout << "The matrix is NOT an identity matrix.\n";
    }

    return 0;
}
