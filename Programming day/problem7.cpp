#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string name;
    double area;
    cout<<"Enter type of the figure";
    cin>>name;
    if(name=="square"){
    double side;
    cout<<"enter side of square";
    cin>>side;
    area=side*side;}
    if(name=="rectangle"){
    double lenghth,width;
    cout<<"enter length and width of rectangle";
    cin>> lenghth >>width;
    area=lenghth*width;}
    if (name=="circle")
    {
       double radius;
       cout<<"enter radius of the circle";
       cin>>radius;
        area = M_PI * radius * radius; 
    }
    if (name=="triangle")
    {
        double base, height;
        cout << "Enter the base: ";
        cin >> base>>height;
       
        area = 0.5 * base * height;
    }
    cout<<"Area"<<area;
    return 0;
  
}