#include <iostream>
#include <vector>
#include <string>
using namespace std;

int PatternTimes(const vector<string>& colors)
{
    int time, n;  
    if (colors.empty()) return 0;

    time = 0;
    n = colors.size();
    time += n * 2;

    for (int i = 1; i < n; i++) {
        if (colors[i] != colors[i - 1]) {
            time += 1;
        }
    }
    return time;
}

int main() 
{
    vector<string> colors = {"Red", "Blue", "Red", "Blue", "Red"};
    cout << "Total time: " << PatternTimes(colors) << " seconds" << endl;
    return 0;
}
