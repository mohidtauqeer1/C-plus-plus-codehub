#include <iostream>
#include <string>

using namespace std;

struct student{
    string name;
    string section;
    int roll_no;
     int age;
    float marks;
};


int main() {
    int n;
    cout<<"enter number of student";
    cin>>n;
    student students[n];
    for (int i = 0; i < n; i++)
    {
       cout<<"enter name = "<<endl;
       cin>>students[i].name;
        cout<<"enter section = "<<endl;
       cin>>students[i].section;
        cout<<"enter roll no = "<<endl;
       cin>>students[i].roll_no;
        cout<<"enter age = "<<endl;
       cin>>students[i].age;
        cout<<"enter marks = "<<endl;
       cin>>students[i].marks;
    }
    
    for (int i = 0; i < n; i++)
    {
    cout<<"name = "<<students[i].name<<endl;
   cout<<"section = "<<students[i].section<<endl;
   cout<<"roll no = "<<students[i].roll_no<<endl;
   cout<<"age = "<<students[i].age<<endl;
   cout<<"marks = "<<students[i].marks<<endl;
    }
    


   
   return 0;
}