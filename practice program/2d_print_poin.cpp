#include <iostream>
using namespace std;

void change_element(int *a,int size){
  for (int i=0; i < size; i++)
  {
    if (a[i]%2==0)
    {
        a[i]=9;
    }
    
  }
}


int main() {
    int a[5]={1,2,3,4,5};
    change_element(a,5);
     for (int i=0; i < 5; i++)
  {
    cout<<a[i]<<endl;
  }
    
}