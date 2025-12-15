#include <iostream>
#include <string>
using namespace std;
char grid[5][5] = {{'.', '.', '.', '*', '*'},{'.', '*', '.', '.', '.'},{'.', '*', '.', '.', '.'},{'.', '*', '.', '.', '.'},{'.', '.', '*', '*', '.'}};
string fire(string coord) 
{
    int row = coord[0] - 'A';   
    int col = (coord[1] - '1'); 
    if (grid[row][col] == '*')
    return "BOOM";
    else
    return "splash";
}
int main() 
{
    cout << fire("A1") << endl;
    cout << fire("A4") << endl;
    cout << fire("D2") << endl;
    return 0;
}