#include <iostream>
#include <cmath>  // For ceil
using namespace std;

int main() {
    int salary = 10000;
    int laptopPrice = 50000;
    float advance = 0.5 * salary * 6;

    cout<<" advance salary: Rs "<<advance<<endl;
    if (advance>=laptopPrice) {
        cout << "he  buy the laptop with his advance salary." << endl;
    } else {
        int monthsneeded =laptopPrice / salary;
        cout << "he  cannot buy the laptop with the advance salary." << endl;
        cout << "he needs to save " << monthsneeded << " full months of salary to buy the laptop." << endl;
    }

    return 0;
}