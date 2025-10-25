#include<iostream>
using namespace std;
int main()
{
float mb, bit;
cout << "Enter the size in megabytes:"<<endl;
cin>> mb;
 bit= mb*8388608;
 cout << mb<<" MB is equivalent to "<<bit<<" bits. " << endl;
 return 0;
 }
