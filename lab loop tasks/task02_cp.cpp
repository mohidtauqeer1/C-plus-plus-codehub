#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter series you want: ";
    cin >> n;
    int a = 0, b = 1, nex;
    cout << " Series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        nex = a + b;
        a = b;
        b = nex;
    }

    return 0;
}
