#include <iostream>
using namespace std;

int iseven(int n)
{
    if (n%2==0)
    {
        return true;
    }else{
        return false;
    }
    
}
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    if (iseven(n))
    {
       cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
    return 0;
}