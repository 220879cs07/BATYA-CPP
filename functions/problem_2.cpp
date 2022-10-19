#include <iostream>
using namespace std;

int product(int a, int b);

int main() {
    int a, b;

    cout << "Enter A: "; cin >> a;
    cout << "Enter B: "; cin >> b;

    cout << "Product: " << product(a, b) << endl;

    return 0;
}

int product(int a, int b) {
    return a * b;
}
