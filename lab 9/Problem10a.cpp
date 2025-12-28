#include <iostream>
using namespace std;
char objects[5][5] = {{'-', '#', '#', '-', '#'},{'#', '-', '-', '#', '-'},{'-', '#', '-', '-', '-'},{'#', '-', '#', '-', '#'},{'#', '-', '-', '-', '-'}};
bool gravity = false;
void DisplayWorld() 
{
    cout << "\nWORLD STATE:\n";
    for (int r = 0; r < 5; r++) 
    {
        for (int c = 0; c < 5; c++) 
        {
            cout << objects[r][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void SetGravityStatus(bool status) 
{
    gravity = status;
    cout << "Gravity turned " << (gravity ? "ON" : "OFF") << ".\n";
}
void TimeTick(int times) 
{
    if (!gravity) 
    {
        cout << "Gravity is OFF. No changes.\n";
        return;
    }
    while (times-- > 0) 
    {
        for (int r = 3; r >= 0; r--) 
        {
            for (int c = 0; c < 5; c++) 
            {
                if (objects[r][c] == '#') 
                {
                    if (objects[r + 1][c] == '-') 
                    {
                        objects[r + 1][c] = '#';
                        objects[r][c] = '-';
                    }
                }
            }
        }
    }
}
int main() 
{
    DisplayWorld();
    SetGravityStatus(true);
    TimeTick(3);
    DisplayWorld();
    return 0;
}
