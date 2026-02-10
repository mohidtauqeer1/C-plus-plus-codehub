#include <iostream>
using namespace std;

struct complex
{
    int re, im;
};

complex multiply(complex c, int k)
{
    complex result;
    result.re = c.re * k;
    result.im = c.im * k;
    return result;
}

int main()
{
    complex c1, c2;
    int k;

    cout << "Enter real part: ";
    cin >> c1.re;
    cout << "Enter imaginary part: ";
    cin >> c1.im;

    cout << "Enter integer multiplier: ";
    cin >> k;

    c2 = multiply(c1, k);

    cout << "Result: " << c2.re << " + " << c2.im << "i";

    return 0;
}
