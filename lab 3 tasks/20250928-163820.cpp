#include<iostream>
 using namespace std;
 int main()
{float q,t,i;
 cout << "Enter the Charge (Q) in Columbs: " << endl;
 cin>>q ;
cout << "Enter the time (t) in seconds: " << endl;
cin>>t;
i=q/t;
 cout << "The current (I) is: "<<i<<"Amperes" << endl;
 return 0;
}