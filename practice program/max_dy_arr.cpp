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
    int max=p[0];
    for (int j = 0; j < n; j++)
    {
        if(p[j]>max){
            max=p[j];
        }
    }
    cout<<"the max is "<<max;
    delete[] p;
}