#include <iostream>
using namespace std;

int main() 
{
    bool found = true;
    int age = 20;
    double hours = 45.30;
    double overTime = 15.00;
    int count = 20;
    char ch = 'B';

    cout << boolalpha;  

    cout << "!found = " << (!found) << endl;
    cout << "hours > 40.00 = " << (hours > 40.00) << endl;
    cout << "!age = " << (!age) << endl; 

    cout << endl;

    // Example 
    cout << "11 > 5 || 6 < 15 && 7 >= 8 = " << (11 > 5 || 6 < 15 && 7 >= 8) << endl;
    cout << "11 > 5 || (6 < 15 && 7 >= 8) = " << (11 > 5 || (6 < 15 && 7 >= 8)) << endl;

    return 0;
}
