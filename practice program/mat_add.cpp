#include <iostream>
using namespace std;
int main() {
 int matrix1[4][4] = {
        {1, 2, 3, 1},
        {5, 1, 1, 8},
        {9, 1, 1, 12},
        {1, 14, 15, 1}
    };
 int matrix2[4][4] = {
    {1, 2, 3, 1},
    {5, 1, 1, 8},
    {9, 1, 1, 12},
    {1, 14, 15, 1}
};
int matrix[4][4];
int sum=0;
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
{
    matrix[i][j]=matrix1[i][j] + matrix2[i][j];
}
}
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
{
    cout<<matrix[i][j]<<" ";
}
cout<<endl;
}

}



