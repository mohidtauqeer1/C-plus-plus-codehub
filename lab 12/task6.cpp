#include <iostream>
#include <string>
using namespace std;
bool isGoalScored(const string field[7]) 
{
    int ballRow = -1, ballCol = -1;
    int crossbarRow = -1;
    for (int r = 0; r < 7; r++) 
    {
        for (int c = 0; c < field[r].size(); c++) 
        {
            if (field[r][c] == '0') 
            {
                ballRow = r;
                ballCol = c;
            }
            if (r > 0 && r < 6 && field[r].find("#######") != string::npos)
            crossbarRow = r;
        }
    }
    if (ballRow == -1 || ballCol == -1 || crossbarRow == -1)
    return false;
    if (ballRow >= crossbarRow)
    return false;
    int leftUpright = -1, rightUpright = -1;
    for (int c = 0; c < field[0].size(); c++) 
        if (field[0][c] == '#') 
        {
            if (leftUpright == -1)
            leftUpright = c;
            else
            rightUpright = c;
        }
    return (ballCol > leftUpright && ballCol < rightUpright);
}
int main() 
{
    string test1[7] = {"        #   #       ","        # 0 #       ","        #   #       ","     #######        ","        #           ","        #           ","        #           "};
    cout << boolalpha << isGoalScored(test1) << endl;
    return 0;
}