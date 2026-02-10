#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 1},
        {5, 1, 1, 8},
        {9, 1, 1, 12},
        {1, 14, 15, 1}
    };
    int row=4,col=4;
    int max=matrix[3][1],min=matrix[0][1];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j]>max)
            {
                max=matrix[i][j];
            }
            if (matrix[i][j]<min)
            {
                min=matrix[i][j];
            }
            
        }
        
    }
    cout<<"min value="<<min<<endl;
    cout<<"max="<<max;
    return 0;
}