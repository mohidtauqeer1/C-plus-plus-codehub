#include<iostream>
using namespace std;
int main()
{
    char oper;
    int n1,n2;
    cout<<"Enter 1st number:";
    cin>>n1;
    cout<<endl<<"Enter 2nd number:";
    cin>>n2;
    cout<<endl<<"Enter operator:";
    cin>>oper;
    if(oper=='+')
    cout<<endl<<"Subtraction is: "<<n1-n2;
    if(oper=='-')
    cout<<endl<<"Addition is: "<<n1+n2;
    if(oper=='*')
    cout<<endl<<"Devision is: "<<n1/n2;
    if(oper=='/')
    cout<<endl<<"Multiplication is: "<<n1*n2;
    return 0;
}