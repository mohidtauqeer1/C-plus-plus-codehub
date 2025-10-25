#include <iostream>
using namespace std;
int main()
{
    int th,h,t,u,rem,n,sum;
    cout<<"enter a four digit number";
    cin>>n;
    th=n/1000;
    rem=n%1000;
    h=rem/100;
    rem=rem%100;
    t=rem/10;
    u=rem%10;
    sum=th+h+t+u;
    cout<<sum;
    return 0;
}