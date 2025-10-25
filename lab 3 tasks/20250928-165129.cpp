#include<iostream>
 using namespace std;
int main()
{
string (cric);
 int win, draw, los, x, y, z;
cout << "Enter the name of cricket team:"<<endl;
cin>> cric;
cout << "Enter the number of wins: "<<endl;
 cin>> win;
 cout << "Enter the number of draws:"<<endl;
 cin>> draw;
 cout << endl;
 cout << "Enter the number of losses:"<<endl;
 cin>> los;
 x=win*3;
y=draw*1;
z=los*0;
cout <<cric<<" has obtained" <<x+y+z<<"points";

return 0;
}