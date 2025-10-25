#include <iostream>
using namespace std;

int main() {
     int num,freq=0,rem,digit;
     cout<<"enter a number";
     cin>>num;
     cout<<"enter a digit";
     cin>>digit;
     while (num>0)
   {
     rem=num%10;
     if (rem==digit)
     freq++;
     num = num / 10;
   }
     cout<<freq;
     return 0; 
}
