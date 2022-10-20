#include <iostream>
using namespace std;

int main() {
    char arr[11] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd' };
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++) {
        cout << arr[i];
    }

    return 0;
}
