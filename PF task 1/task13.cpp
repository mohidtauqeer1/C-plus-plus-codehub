#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    cout << "Enter 5 integers:\n";
    cin >> num; sum += num;
    cin >> num; sum += num;
    cin >> num; sum += num;
    cin >> num; sum += num;
    cin >> num; sum += num;
    cout << "\nSum = " << sum << endl;
    return 0;
}
