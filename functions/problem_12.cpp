#include <iostream>
using namespace std;

int main() {
    float arr[5] = {3.3, 4.55, 1.111, 44.55, 66.66};
    int length = sizeof(arr) / sizeof(arr[1]) - 1;

    cout << arr[length - 1] << endl;

    return 0;
}
