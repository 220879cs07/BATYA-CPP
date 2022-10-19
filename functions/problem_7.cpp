#include <iostream>
#include <cmath>
using namespace std;

int get_length(int arr[]);

int main() {
    int min, max, nums_arr[5] = {};
    
    cout << "Enter numbers: ";
    cin >> nums_arr[0] >> nums_arr[1] >> nums_arr[2] >> nums_arr[3] >> nums_arr[4];
    
    max = nums_arr[0];
    min = nums_arr[0];
    
    int length = get_length(nums_arr);
    cout << length;
    for (int i = 0; i < length; i++) {
        if (nums_arr[i] > max) {
            max = nums_arr[i];
        }
        
        if (nums_arr[i] < min) {
            min = nums_arr[i];
        }
    }
    
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    
    return 0;
}

int get_length(int arr) {
    cout << sizeof(arr) << "  " ;
    return sizeof(arr) / 4;
}

