#include <iostream>
#include <string>
using namespace std;

int main() {
int date;
string month;
cout << "enter the month" << endl;
cin >> month;
cout << "enter the date" << endl;
cin >> date;
if(month=="march"&&date>=21||month=="april"&&date<=19)
cout << "the Ram" << endl;
else if(month=="april"&&date>=20||month=="may"&&date<=20)
cout << "the bull" << endl;
else if(month=="may"&&date>=21||month=="june"&&date<=20)
cout << "the ywins" << endl;
else if(month=="june"&&date>=21||month=="july"&&date<=22)
cout << "the crab" << endl;
else if(month=="july"&&date>=23||month=="august"&&date<=22)
cout << "the lion" << endl;
else if(month=="august"&&date>=23||month=="september"&&date<=22)
cout << "the virgin" << endl;
else if(month=="september"&&date>=23||month=="october"&&date<=22)
cout << "the scales" << endl;
else if(month=="october"&&date>=23||month=="november"&&date<=21)
cout << "the scorpion" << endl;
else if(month=="november"&&date>=22||month=="december"&&date<=21)
cout << "the archer" << endl;
else if(month=="december"&&date>=22||month=="january"&&date<=19)
cout << "the goat" << endl;
else if(month=="january"&&date>=20||month=="february"&&date<=18)
cout << "the water bear" << endl;
else if(month=="february"&&date>=19||month=="march"&&date<=20)
cout << "the fishes" << endl;
return 0;
}