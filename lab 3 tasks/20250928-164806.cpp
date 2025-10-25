#include<iostream>
using namespace std;
 int main()
{
int popul,n,x;
 cout << "Enter the current world population:"<<endl ;
 cin>> popul;
cout << "Enter the monthly birth rate (number of births per month):"<<endl;
cin >> n;
x=((n*12)*30)+popul;
cout << "The population in three decades will be:"<<x;
return 0;
}