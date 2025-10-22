#include <iostream>
using namespace std;
int main()
{
    string country;
    cout <<"Enter your country= ";
    cin>>country;
    if (country!="Germany" &&country!="Australia")
        cout <<"You should come to visit these sometime!";
    else
        cout <<"Nice! You live in "<<country<<".";
    return 0;
}