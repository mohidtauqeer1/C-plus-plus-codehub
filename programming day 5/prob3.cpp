#include <iostream>
#include <string>
using namespace std;

int main() {
     string name,grade;
    float sub1,sub2,sub3,sub4,sub5,per,total_mark;
        cout << "enter your name" << endl;
    cin >> name;
    cout << "enter the marks of five subjects" << endl;
    cin >> sub1>>sub2>>sub3>>sub4>>sub5;
    total_mark =sub1+sub2+sub3+sub4+sub5;
    if(total_mark >500||sub1>100|| sub2>100 ||sub3>100 ||sub4>100 ||sub5>100||sub1<0 ||sub2<0|| sub3<0|| sub4<0 ||sub4<0)
    {
    cout << "invalid input" << endl;}
    else{
    per=100*(total_mark/500);
    if(per>=90)
    grade="A+";
    else if(per>=80)
    grade="A";
    else if(per>=70)
    grade="B+";
    else if(per>=60)
    grade="B";
    else if(per>=50)
    grade="C";
    else if(per>=40)
    grade="D";
    else 
    grade="F";
    cout << "Name="<<name << endl;
    cout << "Total marks=" <<total_mark<< endl;
    cout << "percentage=" <<per<< endl;
    cout << "grade=" <<grade<< endl;
    }
    return 0;
}