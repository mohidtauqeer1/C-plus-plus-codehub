#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 1},
        {5, 1, 1, 8},
        {9, 1, 1, 12},
        {1, 14, 15, 1}
    };
    int n1,n2;
    cout<<"enter number to find element";
    cin>>n1>>n2;
    cout<<matrix[n1][n2];
    return 0;
}