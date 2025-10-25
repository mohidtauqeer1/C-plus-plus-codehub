#include <iostream>
using namespace std;
int main()
{
string name;
int atp,ctp,ats,cts,per,total_amount,chari,remaining;
cout<<"adult ticket price ";
cin>>atp;
cout<<"child ticket price ";
cin>>ctp;
cout<<"number of child tickets sold ";
cin>>cts;
cout<<"number of adult tickets sold ";
cin>>ats;
cout<<"percentage of the amount to be donated to the charit ";
cin>>per;
total_amount=(ctp*cts)+(ats*atp);
chari=total_amount*10/100;
remaining=total_amount-chari;
cout<<"mobie"<<name;
cout<<"total amount from tickets"<<total_amount<<endl;
cout<<"donations"<<chari<<endl;
cout<<"remaining amount"<<remaining;
return 0;
}