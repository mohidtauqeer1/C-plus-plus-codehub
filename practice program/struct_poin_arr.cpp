#include <iostream>
#include <string>

using namespace std;

struct student{
    string name;
    string section;
    int roll_no;
};

int main() {
    int n;
    cout<<"enter number of student";
    cin>>n;

    student* students= new student[n];
    student* ptr= students;

    for (int i = 0; i < n; i++)
    {
       cout<<"enter name = "<<endl;
       cin>>ptr[i].name;
        cout<<"enter section = "<<endl;
       cin>>ptr[i].section;
        cout<<"enter roll no = "<<endl;
       cin>>ptr[i].roll_no;
    }
     for (int i = 0; i < n; i++)
    {
    cout<<"name = "<<ptr[i].name<<endl;
    cout<<"section = "<<ptr[i].section<<endl;
    cout<<"roll no = "<<ptr[i].roll_no<<endl;
    }

}