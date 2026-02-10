#include <iostream>
#include <string>

using namespace std;

double radius(){   
    int n;
    cout<<"enter radius"<<endl;
    cin>>n;
    return n;
}
double area(double radius){
   double area=3.14*radius*radius;
   return area;
}
int main() {
    double radiu= radius();
    area(radiu);
    cout<<area(radiu);

 

}