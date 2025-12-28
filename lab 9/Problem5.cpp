#include <iostream>
using namespace std;
int CommonChars(string st1, string st2) {
    int count = 0;
    int f1[256] = {0};
    int f2[256] = {0};
    for(char c : st1)
        f1[c]++;
    for(char c : st2)
        f2[c]++;
    for(int i = 0; i < 256; i++) {
        count += min(f1[i], f2[i]);
    }
    return count;
}
int main() {
    string st1, st2;
    cout << "Enter first string: ";
    cin >> st1;
    cout << "Enter second string: ";
    cin >> st2;
    cout << "Common characters = " << CommonChars(st1, st2);
    return 0;
}