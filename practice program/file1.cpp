#include <iostream>
#include<fstream>
#include <string>

using namespace std;

int main() {
  string arr[5];
  for (int i = 0; i < 5; i++)
  {
    cout<<"enter name "<<i+1<<endl;
    cin>>arr[i];
  }
   fstream file;
   file.open("text.txt",ios::out);
     for (int i = 0; i < 5; i++)
  {
    file<<arr[i]<<endl;
  }
  file.close();
}