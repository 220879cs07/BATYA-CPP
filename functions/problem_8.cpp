#include <iostream>
using namespace std;

void print(float a, float b);
float add(float a, float b);
float subtract(float a, float b);
float product(float a, float b);
float division(float a, float b);

int main() {
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    print(a, b);

    return 0;
}

void print(float a, float b) {
    cout << "Add: " << add(a, b) << endl;
    cout << "Subtract: " << subtract(a, b) << endl;
    cout << "Product: " << product(a, b) << endl;
    cout << "Division: " << division(a, b) << endl;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float product(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}
