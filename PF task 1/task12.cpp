#include <iostream>
using namespace std;

int main() {
    int n, w, h;
    cout << "Enter how many square meters you can paint: ";
    cin >> n;
    cout << "Enter the width of one wall: ";
    cin >> w;
    cout << "Enter the height of one wall: ";
    cin >> h;
    int wall_area = w * h;
    int complete_walls = n / wall_area;
    cout << "\nYou can completely paint " << complete_walls << " wall" << endl;
    return 0;
}
