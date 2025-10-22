#include <iostream>
using namespace std;
int main()
{
    string temp, humidity;
    cout <<"Enter temperature = ";
    cin >>temp;
    cout <<"Enter humidity = ";
    cin >>humidity;
    if (temp=="warm" && humidity=="dry")
        cout <<"Play tennis";
    else if (temp=="warm" && humidity=="humid")
        cout <<"Swim";
    else if (temp=="cold" && humidity=="dry")
        cout <<"Play basketball";
    else if (temp=="cold" && humidity=="humid")
        cout <<"Watch TV";
    else
        cout <<"Invalid input";
    return 0;
}