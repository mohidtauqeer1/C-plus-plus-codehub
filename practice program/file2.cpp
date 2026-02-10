#include <iostream>
#include<fstream>
#include <string>

using namespace std;

int main() {
   fstream file;
   file.open("text.txt",ios::in);
   string line;

     while (!file.eof())
     {
        
        getline(file,line);
          cout<<line;
        
     }
     
  file.close();
}