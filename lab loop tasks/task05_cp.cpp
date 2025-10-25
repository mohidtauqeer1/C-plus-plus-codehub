#include <iostream>
using namespace std;

int main() {
   int num,sum=0;
   cout<<"enter a number";
   cin>>num;
  if (num<0)
  {
    num=-num;
  }
  
    while (num>0)
    {
    sum=sum+(num%10);
    num=num/10;
        
    }
    cout<<sum;
     return 0; 
}
