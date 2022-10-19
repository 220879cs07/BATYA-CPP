#include <iostream>
using namespace std;

int sum(int a, int b);

int main() {
    int a, b;

    cout << "Enter A: "; cin >> a;
    cout << "Enter B: "; cin >> b;

    cout << "Sum: " << sum(a, b) << endl;

    return 0;
}

int sum(int a, int b) {
    return a + b;
}
