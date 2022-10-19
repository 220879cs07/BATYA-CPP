#include <iostream>
#include <cmath>
using namespace std;

float circumference_circle(float a);
float area_circle(float r);

int main() {
    int radius;
    
    cout << "Enter radius: "; cin >> radius;
    
    cout << "Circumference circle: " << circumference_circle(radius) << endl;
    cout << "Area circle: " << area_circle(radius) << endl;

    return 0;
}

float circumference_circle(float r) {
    return 3.14 * 2 * r;
}

float area_circle(float r) {
    return 3.14 * pow(r, 2);
}
