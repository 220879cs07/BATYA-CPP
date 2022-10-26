#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter number: ";
    cin >> number;
    
    for (int i = 0; i < number; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    
    return 0;
}
