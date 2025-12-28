#include <iostream>
using namespace std;
int countIdenticalRows(int M[][3], int rows) 
{
    int count = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = i + 1; j < rows; j++) 
        {
            if (M[i][0] == M[j][0] && M[i][1] == M[j][1] && M[i][2] == M[j][2]) 
            {
                count++;
            }
        }
    }
    return count;
}
int main() 
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int M[100][3];   
    cout << "\nEnter the elements of the " << rows << " x 3 matrix:\n";
    for (int r = 0; r < rows; r++) 
    {
        for (int c = 0; c < 3; c++) 
        {
            cout << "M[" << r << "][" << c << "] = ";
            cin >> M[r][c];
        }
    }
    int identicalCount = countIdenticalRows(M, rows);
    cout << "\nTotal number of identical row pairs = " << identicalCount << endl;
    return 0;
}
