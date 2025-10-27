#include <iostream> 
using namespace std;

int main() {
    int n,count2 = 0, count3 = 0, count4 = 0,number;
    cout << "Enter the number of integers : ";
    cin >> n;
    cout << "Enter "<<n<< " numbers:";
    for (int i = 0; i < n; i++) {
        cin >> number;
        if (number % 2 == 0)
            count2++;
        if (number % 3 == 0)
            count3++;
        if (number % 4 == 0)
            count4++;
    }
    double p1 =(count2 * 100.0)/n;
    double p2 =(count3 * 100.0)/n;
    double p3 =(count4 * 100.0)/n;
    cout << "Percentage divisible by 2: " << p1 << "%" << endl;
    cout << "Percentage divisible by 3: " << p2 << "%" << endl;
    cout << "Percentage divisible by 4: " << p3 << "%" << endl;
    return 0;
}
