#include <iostream>
#include <cmath>
using namespace std;

int factorial(int num);

int main() {
    int number;
    
    cout << "Enter number: "; cin >> number;
    cout << factorial(number) << endl;
    
    return 0;
}

int factorial(int num) {
    int value = 1;
    
    for (int i = 1; i <= num; i++) {
        value *= i;
    }
    
    return value;
}

