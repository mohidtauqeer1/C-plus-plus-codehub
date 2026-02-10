#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter array size =";
    cin>>n;
    int *p=new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter element=";
        cin>>p[i];
    }
    int sum=0;
    for (int j = 0; j < n; j++)
    {
        sum+=p[j];
    }
    cout<<"the sum is "<<sum;
    delete[] p;
}