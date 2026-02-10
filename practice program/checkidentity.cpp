#include <iostream>
using namespace std;

int main() {
    int row = 4, col = 4;
    int matrix[row][col] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };

    bool isIdentity = false;

    if (row != col) {
        cout << "Not an Identity Matrix";
        return 0;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j && matrix[i][j] == 1) {
                isIdentity = true;
            }
            else if (i != j && matrix[i][j] == 0) {
                isIdentity = true;
            }
        }
    }

    if (isIdentity)
        cout << "Identity Matrix";
    else
        cout << "Not an Identity Matrix";

    return 0;
}
