#include <iostream>
using namespace std;
int main()
{
    string name;
    float eng, math, chem, ss, bio, total, percentage;
    cout <<"Enter student name: ";
    getline(cin, name);
    cout <<"Enter marks of English, Maths, Chemistry, Social Science, Biology: ";
    cin >>eng>>math>>chem>>ss>>bio;
    total = eng+math+chem+ss+bio;
    percentage = (total/500)*100;
    string grade;
    if (percentage >= 90) grade ="A+";
    else if (percentage >=80) grade="A";
    else if (percentage >=70) grade ="B+";
    else if (percentage >=60) grade="B";
    else if (percentage >=50) grade="C";
    else if (percentage >=40) grade ="D";
    else grade ="F";
    cout <<"Student Name: "<<name <<endl;
    cout <<"Total Marks: "<<total <<endl;
    cout <<"Obtain percentage: "<<percentage << "%" << endl;
    cout <<"Obtained Grade: "<<grade;
    return 0;
}