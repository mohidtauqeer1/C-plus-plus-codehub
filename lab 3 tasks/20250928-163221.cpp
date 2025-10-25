#include<iostream>
using namespace std;
 int main()
 {
string (a);
int mat,inter, ecat;
float aggre;
cout << "Enter the student's name:" << endl;
cin>>a;
cout << "Enter matriculation marks (out of 1100):"<< endl;
cin >> mat;
cout << "Enter intermediate marks (out of 550): " << endl;
cin >> inter;
cout << "Enter ecat marks (out of 400): "<<endl;
 cin >> ecat;
aggre=((ecat/400.0*50.0/100.0)+(inter/550.0*40.0/100.0)+(mat/1100*10.0/100.0))*100.0;
cout << "Aggregate score"<<aggre;
return 0;
}