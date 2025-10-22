#include <iostream>
#include <iomanip>  // for setw
using namespace std;

int main() {
    cout<<setfill('*');
    cout << setw(5) << "Num" << setw(8) << "Value" << endl;
    cout << setw(5) << 1 << setw(8) << 100 << endl;
    cout << setw(5) << 22 << setw(8) << 5000 << endl;
    cout << setw(5) << 333 << setw(8) << 60 << endl;
    return 0;
}
