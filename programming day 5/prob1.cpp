#include <iostream>
using namespace std;

int main() {
string temp,humidity;
cout << "enter temperature" << endl;
cin >> temp;
cout << "enter humidity" << endl;
cin >> humidity;
if(temp=="warm"&&humidity=="dry"){
cout << "play tennis" << endl;}
if(temp=="warm"&&humidity=="humid"){
cout << "swim" << endl;}
if(temp=="cold"&&humidity=="dry"){
cout << "play basketball" << endl;}
if(temp=="cold"&&humidity=="humid"){
cout << "watch tv" << endl;}
return 0;
}