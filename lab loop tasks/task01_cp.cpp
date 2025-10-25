#include<iostream>
using namespace std;
int main()
{
    int number,i,mul;
    cout<<"enter  number=";
    cin>>number;
    for ( i = 1; i <=10 ; i++)
    {
        mul=5*i;
        cout<<number<<"x"<<i<<"="<<mul<<endl;
    }
    return 0;
}