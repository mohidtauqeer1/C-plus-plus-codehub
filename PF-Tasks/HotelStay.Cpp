#include <iostream>
#include <string>
using namespace std;

int main() {
    string month;
    int nights;
    double studiopn;
    double apartnemtpn ;

    cout << "Enter month: ";
    cin >> month;
    cout << "Enter number of nights: ";
    cin >> nights;

    if (month == "May" || month == "October") {
        studiopn = 50;
        apartnemtpn = 65;
        if (nights > 14) {
            studiopn *= 0.70; 
        } else if (nights > 7) {
            studiopn *= 0.95;  
        }
    }
    else if (month == "June" || month == "September") {
        studiopn = 75.20;
        apartnemtpn = 68.70;
        if (nights > 14) {
            studiopn *= 0.80; 
        }
    }
    else if (month == "July" || month == "August") {
        studiopn = 76;
        apartnemtpn = 77;
    }
    else {
        cout << "error";
        return 0;
    }
    if (nights > 14) {
        apartnemtpn *= 0.90; 
    }
    double studioTotal = studiopn * nights;
    double apartmentTotal = apartnemtpn * nights;
    cout << "Apartment: " << apartmentTotal << "$." << endl;
    cout << "Studio: " << studioTotal << "$." << endl;

    return 0;
}
