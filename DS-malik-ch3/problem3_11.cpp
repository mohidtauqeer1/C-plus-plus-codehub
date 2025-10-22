#include <iostream> 
#include <iomanip> 
using namespace std; 
int main()
{
double radius = 12.67;
double height = 12345.6789;
cout << fixed;
cout<<showpoint;
cout << setprecision(3);
cout << " radius = " << radius << endl; 
cout << " height = " << height << endl; 
return 0;
}