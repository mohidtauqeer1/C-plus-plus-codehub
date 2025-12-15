#include <iostream>
using namespace std;
bool test(string arr[]) {
    for(int i = 1; i < 4; i++) {
        if(arr[i] != arr[0])
            return false;
    }
    return true;
}
int main() {
    string arr[4];
    cout << "Enter 4 slot values: ";
    for(int i = 0; i < 4; i++)
        cin >> arr[i];
    if(test(arr))
        cout << "true";
    else
        cout << "false";
    return 0;
}