#include <iostream>
using namespace std;

int main() {
     int a,b,temp,gcd,lcm;
     cout<<"enter two numbers=";
     cin>>a>>b;
     int num1=a,num2=b;
     while(b!=0){
     temp=b;
     b=a%b;
     a=temp;
     }
      gcd=a;
     lcm=(num1*num2)/gcd;
     cout<<"LCM="<<lcm<<endl;
     cout<<"GCD="<<gcd;
     return 0; 
}
