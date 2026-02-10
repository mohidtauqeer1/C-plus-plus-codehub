#include <iostream>
using namespace std;

int main() {
     int matrix[4][3] = {
        {1, 2, 3},
        {5, 1, 1},
        {9, 1, 12},
        {1, 14, 15}
    };
    int row=4,col=3;
    // row sum
    for (int i = 0; i < row; i++)
    {
        int rowsum=0;
        for (int j = 0; j < col; j++)
        {
            rowsum+=matrix[i][j];
        }
        cout<<rowsum<<endl;
    }
    
    // column sum
       for (int j = 0; j < col; j++)
    {
        int colsum=0;
        for (int i = 0; i < row; i++)
        {
            colsum+=matrix[i][j];
        }
        cout<<colsum<<endl;
    }
    return 0;
}