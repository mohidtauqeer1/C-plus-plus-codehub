#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    int n;
    cin >> n;  

    double totalTons = 0, minibusTons = 0, truckTons = 0, trainTons = 0, totalCost = 0;
    for (int i = 0; i < n; i++) {
        int tons;
        cin >> tons;
        totalTons += tons;

        if (tons <= 3) {
            minibusTons += tons;
            totalCost += tons * 200;
        } 
        else if (tons <= 11) {
            truckTons += tons;
            totalCost += tons * 175;
        } 
        else {
            trainTons += tons;
            totalCost += tons * 120;
        }
    }
    double percentTrain,percentTruck,percentMinibus,avgPricePerTon = totalCost / totalTons;
    percentMinibus = (minibusTons / totalTons) * 100;
    percentTruck = (truckTons / totalTons) * 100;
    percentTrain = (trainTons / totalTons) * 100;
    cout << fixed << setprecision(2);
    cout << avgPricePerTon << endl;
    cout << percentMinibus << "%" << endl;
    cout << percentTruck << "%" << endl;
    cout << percentTrain << "%" << endl;
    return 0;
}
