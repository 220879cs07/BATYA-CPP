#include <iostream>
#include <cmath>
using namespace std;

bool is_even(int number);

int main() {
    int number;
    
    cout << "Enter number: "; cin >> number;
    
    cout << (is_even(number) ? "Even" : "Odd") << endl;
    
    return 0;
}

bool is_even(int number) {
    return number / 2 == 0;
}
