#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o,result,subtract,product,sum;
    cout << "Enter 15 numbers";
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n >> o;
     sum = a + b + c + d + e;
     product = f * g * h * i * j;
     subtract = k - l - m - n - o;
     result = (sum + product) - subtract;
    cout << "\nFinal Result: " << result << endl;
    return 0;
}
