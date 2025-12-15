#include<iostream>
using namespace std;
const int Rsize = 5;
const int Csize = 5;
void printcars(int a[Rsize][Csize])
{
    for(int i=0; i<Rsize; i++)
    {
        for(int j=0; j<Csize; j++)
        cout<<a[i][j]<<"\t";
        cout<<endl;
    }
    return;
}
int main()
{
    int cardata[Rsize][Csize] = {{10,7,12,10,4},{18,11,15,17,2},{23,19,12,16,14},{7,12,16,0,2},{3,5,6,2,1}};
    printcars(cardata);
    return 0;
}