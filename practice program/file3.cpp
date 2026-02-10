#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("text.txt");
    if (!fin) {
        cout << "Cannot open file!" << endl;
        return 1;
    }

    int n;
    fin >> n;  // number of cities
    string skip;
    getline(fin, skip); // skip rest of first line
    getline(fin, skip); // skip headings
    getline(fin, skip); // skip underline

    string names[100];      // array for names
    double longitude[100];  // array for longitude
    double latitude[100];   // array for latitude
    int count = 0;

    for (int i = 0; i < n; i++) {
        string city;
        int area, population;
        double lon, lat;

        fin >> city >> area >> population >> lon >> lat;

        if (population > 1000000) { // check population
            names[count] = city;
            longitude[count] = lon;
            latitude[count] = lat;
            count++;
        }
    }

    // print cities with population > 1,000,000
    for (int i = 0; i < count; i++) {
        cout << names[i] << " -> Longitude: " << longitude[i] 
             << ", Latitude: " << latitude[i] << endl;
    }

    fin.close();
    return 0;
}
