#include<iostream>
using namespace std;
int main()
{
    int sum=0,num=0;
    cout<<"enter a number=";
    cin>>num;
    while(num>=0){
    sum=sum+num;
    cout<<"enter a number=";
    cin>>num;
    }
    cout<<"the sum is="<<sum;
    return 0;
}