#include <iostream>
using namespace std;

int main() {
    const int TOTAL_DAYS = 365;
    const int NORM_MINUTES = 30000;
    const int PLAY_WORKING_DAY = 63;
    const int PLAY_HOLIDAY = 127;

    int holidays;
    cout << "Enter the number of holidays: ";
    cin >> holidays;

    int workingDays = TOTAL_DAYS - holidays;

    int totalPlayMinutes = (workingDays * PLAY_WORKING_DAY) + (holidays * PLAY_HOLIDAY);

    int difference = abs(NORM_MINUTES - totalPlayMinutes);
    int hours = difference / 60;
    int minutes = difference % 60;

    cout << "tal play time in the year: " << totalPlayMinutes << " minutes" << endl;

    if (totalPlayMinutes > NORM_MINUTES) {
        cout << "Tom will run away" << endl;
        cout << difference << " minutes more than the norm (" << hours << " hours and " << minutes << " minutes)" << endl;
    } else {
        cout << "Tom sleeps well" << endl;
        cout << difference << " minutes less than the norm (" << hours << " hours and " << minutes << " minutes)" << endl;
    }

    return 0;
}