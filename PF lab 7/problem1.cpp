#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter the higher bound number: ";
    cin >> num;
    int array[num];
    for (int i = 1; i < num; i++) {
        if (i % 4 == 0)
            cout << i * 10 << " ";  
        else
            cout << i << " ";       
    }
    cout << endl;
    return 0;
}
