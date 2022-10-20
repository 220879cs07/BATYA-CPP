#include "main.h"

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
