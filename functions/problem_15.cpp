#include <iostream>

using namespace std;

float get_hour_from_sec(float seconds);
float get_km_from_m(float distance);

int main() {
    float distance, time;
    
    cout << "Enter distance and time: ";
    cin >> distance >> time;
    
    cout << "m/s: " << (distance / time) << endl;
    cout << "km/h: " << (get_km_from_m(distance) / get_hour_from_sec(time)) << endl;
    
    return 0;
}

float get_hour_from_sec(float seconds) {
    return seconds / 3600;
}

float get_km_from_m(float distance) {
    return distance / 1000;
}

