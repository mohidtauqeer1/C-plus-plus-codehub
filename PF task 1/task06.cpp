#include <iostream>
using namespace std;
int main()
{
int bag_pound,cost_bag,area,c,f;
cout<<"enter the weight of the bags in pounds ";
cin>>bag_pound;
cout<<"enter the cost of the per bag ";
cin>>cost_bag;
cout<<"enter the area in square feet that can be covered by the bag ";
cin>>area;
c=cost_bag/bag_pound;
f=cost_bag/area;
cout<<c<<endl;
cout<<f;
return 0;
}