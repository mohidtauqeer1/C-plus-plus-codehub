#include <iostream>
#include <string>
using namespace std;

int main() {
    string fruit, day;
    double quantity;
    double price;
    cout << "Enter fruit: ";
    cin >> fruit;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter quantity: ";
    cin >> quantity;
    bool  validDay = (day == "Monday" || day == "Tuesday" || day == "Wednesday" ||
                     day == "Thursday" || day == "Friday" || day == "Saturday" || day == "Sunday" || day == "monday" || day == "tuesday" || day == "wednesday" ||
                     day == "thursday" || day == "friday" || day == "saturday" || day == "sunday");
    bool validFruit = (fruit == "banana" || fruit == "apple" || fruit == "orange" ||
                       fruit == "grapefruit" || fruit == "kiwi" || fruit == "pineapple" || fruit == "grapes");
    if (!validDay || !validFruit) {
        cout << "error";
        return 0;
    }
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" ||
        day == "Thursday" || day == "Friday"|| day == "monday" || day == "tuesday" || day == "wednesday" ||
                     day == "thursday" || day == "friday" || day == "saturday" || day == "sunday" ) {   
        if (fruit == "banana") price = 2.50;
        else if (fruit == "apple") price = 1.20;
        else if (fruit == "orange") price = 0.85;
        else if (fruit == "grapefruit") price = 1.45;
        else if (fruit == "kiwi") price = 2.70;
        else if (fruit == "pineapple") price = 5.50;
        else if (fruit == "grapes") price = 3.85;
    }
    else if (day == "Saturday" || day == "Sunday") {
        if (fruit == "banana") price = 2.70;
        else if (fruit == "apple") price = 1.25;
        else if (fruit == "orange") price = 0.90;
        else if (fruit == "grapefruit") price = 1.60;
        else if (fruit == "kiwi") price = 3.00;
        else if (fruit == "pineapple") price = 5.60;
        else if (fruit == "grapes") price = 4.20;
    }
    cout << price * quantity;
    return 0;
}