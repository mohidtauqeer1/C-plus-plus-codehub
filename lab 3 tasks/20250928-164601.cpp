#include<iostream>
using namespace std;
int main()
{
float vol, cur, wat;
cout << "Enter voltage:"<<endl;
 cin >> vol;
cout << "Enter current :"<<endl;
 cin>> cur;
 wat =vol*cur;
 cout << "The power is " <<wat<<" watts."<< endl;
return 0;
}