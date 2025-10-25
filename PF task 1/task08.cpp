#include <iostream>
using namespace std;
int main()
{
    float veg,fruit,earnings;
    int tkv,tkf;
    cout<<"vegetable price per kilogram ";
    cin>>veg;
    cout<<"fruit price per kilogram ";
    cin>>fruit;
    cout<<"total kilograms of vegetables ";
    cin>>tkv;
    cout<<"total kilograms of fruits ";
    cin>>tkf;
    earnings=(veg*tkv)+(fruit*tkf)*1.94;
    cout<<earnings;
    return 0;
}