#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 60)             
        cout << "Passing" << endl;    
    cout << "Failing" << endl;          

    return 0;
}
