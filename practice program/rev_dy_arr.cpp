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
    for (int j = n-1; j >= 0; j--)
    {
        cout<<p[j];
    }

    delete[] p;
}