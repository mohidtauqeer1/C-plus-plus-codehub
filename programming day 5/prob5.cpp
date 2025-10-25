#include <iostream>
using namespace std;

int main() {
string service,shift_min;
double min,total_min,char_min,total_pri;
cout << "enter type of service (p or r)= " << endl;
cin >> service;

if(service=="p"||service =="r" || service=="P"||service =="R"){
  if(service=="r" || service=="R"){
  cout << "enter the minutes used " << endl;
    cin >> min;
     if(min<=50){
       cout << "your bill will be 10$" << endl;
       
     }
     else {
       char_min=min-50;
       total_pri=char_min * 0.20+10;
       cout << "your bill will be "<<total_pri << endl;
     }
     cout << "service type :regular" << endl;
  }
  else if(service =="p" || service =="P"){
     cout << "enter day or night (d or n)=" << endl;
     cin >> shift_min ;
     if(shift_min =="d"){
     cout << "enter the minutes used " << endl;
     cin >> min;
        if(min<=70){
           cout << "your bill will be 25$ " << endl; 
           total_pri=25;
        }
        else if(min>70){
           char_min=min-70;
           total_pri=char_min * 0.10+25;
           cout << "your bill will be "<<total_pri << endl;
        }
     }
     else if(shift_min =="n" || shift_min =="N"){
     cout << "enter the minutes used " << endl;
     cin >> min;
        if(min<=100){
           cout << "your bill will be 25$" << endl;
           total_pri=25;
        }
        else if(min>100){
           char_min=min-100;
           total_pri=char_min * 0.05+25;
           cout << "your bill will be "<<total_pri << endl;
        }
     }
     cout << "service type :premium" << endl;
  }
}
else{
   cout << "invalid service code " << endl;
   
}
return 0;
}