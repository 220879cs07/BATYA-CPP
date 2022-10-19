#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num);

int main() {
    int number;
    
    cout << "Enter number: "; cin >> number;
    cout << (is_prime(number) ? "Prime" : "Not Prime") << endl;
    
    return 0;
}

bool is_prime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}
