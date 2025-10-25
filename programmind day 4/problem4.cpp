#include<iostream>
using namespace std;
int main()
{
    int rr,wr,tulip;
    double tp,dp,discount;
    cout<<"enter number of red roses=";
    cin>>rr;
    cout<<"enter number of white roses=";
    cin>>wr;
    cout<<"enter number of red tulips=";
    cin>>tulip;
    tp=rr*2.0+wr*4.10+tulip*2.50;
    cout<<"orignal price"<<tp;

    if(tp>200)
 discount = tp* 0.20;
 dp= tp-discount;
  cout<<"the total price after the discount is="<<dp;
  return 0;
}