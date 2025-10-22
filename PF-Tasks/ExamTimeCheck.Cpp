#include <iostream>
using namespace std;
int main()
{
    int exam_hr,exam_min,arrival_hrs,arrival_min,exam_time,arrival_time,hrs,mint,early,late;
    cout<<"Enter exam starting time (hour minute): ";
    cin>>exam_hr>>exam_min;
    cout<<"Enter student arrival time (hour minute): ";
    cin>>arrival_hrs>>arrival_min;
    exam_time= exam_hr * 60 + exam_min;
    arrival_time= arrival_hrs * 60+ arrival_min;
    if(arrival_time==exam_time)
    {
        cout<<"On time";
    }
    else if(arrival_time > exam_time)
    {
        cout<<"Late"<<endl;
        late= arrival_time - exam_time;
        hrs= late / 60;
        mint= late % 60;
        if(hrs==0)
            cout<<mint<<" minutes after the start";
        else
        {
            cout<<hrs<<":";
            if(mint<10)
                cout<<"0"<<mint;
            else
                cout<<mint;
            cout<<" hours after the start";
        }
    }
    else
    {
        early=exam_time - arrival_time;
        if(early<=30)
        {
            cout<<"On time"<<endl;
            cout<<early<<" minutes before the start";
        }
        else
        {
            cout<<"Early"<<endl;
            hrs=early / 60;
            mint=early % 60;
            if(hrs==0)
                cout<<mint<<" minutes before the start";
            else
            {
                cout<<hrs<<":";
                if(mint<10)
                    cout<<"0"<<mint;
                else
                    cout<<mint;
                cout<<" hours before the start";
            }
        }
    }
    return 0;
}