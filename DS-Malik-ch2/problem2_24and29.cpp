#include <iostream> 
using namespace std; 
const int NUMBER = 12; 
int main()
{
int firstNum; 
int secondNum; 
firstNum = 18; 
cout << "firstNum =" << firstNum <<"\n" ; 
cout << "Enter an integer: "; 
cin >> secondNum ; 
cout << " secondNum =\n " << secondNum;
firstNum = firstNum + NUMBER + 2 * secondNum; 
cout << " The new value of "<< "firstNum = " << firstNum << "\n"; 
return 0; 
}