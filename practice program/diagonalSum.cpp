#include <iostream>
using namespace std;
int diagonalSum(int mat[][4], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += mat[i][i];             
        sum += mat[i][n - 1 - i];  
    }
    return sum;
}

int main() {
    int n = 4;
    int matrix[4][4] = {
        {1, 2, 3, 1},
        {5, 1, 1, 8},
        {9, 1, 1, 12},
        {1, 14, 15, 1}
    };

    cout << "Total Diagonal Sum: " << diagonalSum(matrix, n) << endl;

    return 0;
}