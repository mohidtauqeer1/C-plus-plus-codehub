#include <iostream>
using namespace std;
const int COLS = 5;
void largestColumnFirst(int M[][COLS], int rows) 
{
    int maxCol = 0;
    int maxSum = -1000000000; 
    for (int col = 0; col < COLS; col++) 
    {
        int sum = 0;
        for (int r = 0; r < rows; r++) 
        {
            sum += M[r][col];
        }
        if (sum > maxSum) 
        {
            maxSum = sum;
            maxCol = col;
        }
    }
    for (int r = 0; r < rows; r++) 
    {
        int temp = M[r][0];
        M[r][0] = M[r][maxCol];
        M[r][maxCol] = temp;
    }
}
int main() 
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int M[50][COLS]; 
    cout << "\nEnter the elements of the matrix (" << rows << " x " << COLS << "):\n";
    for (int r = 0; r < rows; r++) 
    {
        for (int c = 0; c < COLS; c++) 
        {
            cout << "M[" << r << "][" << c << "] = ";
            cin >> M[r][c];
        }
    }
    largestColumnFirst(M, rows);
    cout << "\nMatrix after swapping largest-sum column with column 0:\n";
    for (int r = 0; r < rows; r++) 
    {
        for (int c = 0; c < COLS; c++)
        cout << M[r][c] << " ";
        cout << endl;
    }
    return 0;
}
