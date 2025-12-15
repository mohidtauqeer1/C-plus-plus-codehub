#include<iostream>
using namespace std;
const int Rsize = 5;
const int Csize = 5;
void toyotaBlue(int a[Rsize][Csize])
{
    cout<<"Total Toyota Blue Cars: "<<a[1][3];
    cout<<endl;

}
void redCars(int a[Rsize][Csize])
{
    int total=0;
    for(int j=0;j<Csize;j++)
    total = total + a[0][j];
    cout<<"Total Red Cars: "<<total;
    cout<<endl;
}
void nissanCars(int a[Rsize][Csize])
{
    int total=0;
    for(int j=0;j<Csize;j++)
    total = total + a[j][2];
    cout<<"Total Nissan Cars: "<<total;
    cout<<endl;
}
void convertor(int a[Rsize][Csize],string color)
{
    if(color == "Red")
    {
        int total=0;
        for(int j=0;j<Csize;j++)
        total = total + a[0][j];
        cout<<"Total Red Cars: "<<total;
        cout<<endl;
    }
    else if(color == "Black")
    {
        int total=0;
        for(int j=0;j<Csize;j++)
        total = total + a[1][j];
        cout<<"Total Black Cars: "<<total;
        cout<<endl;
    }
    else if(color == "Brown")
    {
        int total=0;
        for(int j=0;j<Csize;j++)
        total = total + a[2][j];
        cout<<"Total Brown Cars: "<<total;
        cout<<endl;
    }
    else if(color == "Blue")
    {
        int total=0;
        for(int j=0;j<Csize;j++)
        total = total + a[3][j];
        cout<<"Total Blue Cars: "<<total;
        cout<<endl;
    }
    else if(color == "Gray")
    {
        int total=0;
        for(int j=0;j<Csize;j++)
        total = total + a[1][j];
        cout<<"Total Gray Cars: "<<total;
        cout<<endl;
    }
    else
    cout<<"Color not Available";
    cout<<endl;
}
void matrixConvert(int a[Rsize][Csize])
{
    for(int i=0; i<Rsize; i++)
    {
        for(int j=0; j<Csize; j++)
        cout<<a[j][i]<<"\t";
        cout<<endl;
    }
}
int main()
{
    int cardata[Rsize][Csize] = {{10,7,12,10,4},{18,11,15,17,2},{23,19,12,16,14},{7,12,16,0,2},{3,5,6,2,1}};
    toyotaBlue(cardata);
    redCars(cardata);
    nissanCars(cardata);
    string color;
    cout<<"Enter the color: ";
    cin>>color;
    convertor(cardata,color);
    matrixConvert(cardata);
    return 0;
}