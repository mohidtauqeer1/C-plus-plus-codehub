#include<iostream>
using namespace std;
int main()
{
    double tp,dis,fp;
    string country;
    cout<<"Enter the country name";
    cin>>country;
    cout<<"Enter the ticket price";
    cin>>tp;
    if(country=="ireland"){
   fp=tp-(tp*10/100);
    cout<<"the final price of ticket will be"<<fp;
    }
    else
    {
         fp=tp-(tp*5/100);
    cout<<"the final price of ticket will be"<<fp;
    }
    
   
}