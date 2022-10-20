#include <iostream>
using namespace std;

void print_min(int min);
void print_max(int max);
bool is_grater(int a, int b);
bool is_less(int a, int b);

int main() {
    int min, max, nums_arr[3] = {};

    cout << "Enter numbers: ";
    cin >> nums_arr[0] >> nums_arr[1] >> nums_arr[2];

    max = nums_arr[0];
    min = nums_arr[0];

    int length = sizeof(nums_arr) / sizeof(nums_arr[0]);

    for (int i = 0; i < length; i++) {
        if (is_grater(nums_arr[i], max)) max = nums_arr[i];
        if (is_less(nums_arr[i], min)) min = nums_arr[i];
    }

    print_max(max);
    print_min(min);

    return 0;
}

void print_min(int min) {
    cout << "Minimum: " << min << endl;
}

void print_max(int max) {
    cout << "Minimum: " << max << endl;
}

bool is_grater(int a, int b) {
    return a > b;
}

bool is_less(int a, int b) {
    return a < b;
}
