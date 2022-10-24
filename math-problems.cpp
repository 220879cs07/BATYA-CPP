// Problem: Hypotheses Collatz
#include <iostream>
using namespace std;

void start_app();
void print_with_coma(int num);
int odd_func(int a);
int divide(int a, int b);
bool is_even(int number);
bool is_grater(int a, int b);

int main() {
    start_app();
}

void start_app() {
    unsigned int num, result;
    cout << "Enter Number: "; cin >> num;
    
    while (is_grater(num, 1)) {
        result = odd_func(num);
        
        is_even(result)
            ? num = odd_func(num)
            : num = divide(num, 2);
        
        print_with_coma(num);
    }
}

void print_with_coma(int num) {
    cout << num;
    
    if (num > 1) cout << ", ";
}

int odd_func(int a) {
    return (a * 3) + 1;
}

int divide(int a, int b) {
    return a / b;
}

bool is_even(int number) {
    return number % 2 == 0;
}

bool is_grater(int a, int b) {
    return a > b;
}
