#include <string>
#include <iostream>
#include <math.h>

using namespace std;

/* Problem 1
int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    
    return 0;
} */


/* Problem 2
int main() {
    int sum = 0;
    
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    
    cout << "Sum: " << sum << endl;
    return 0;
} */


/* Problem 3
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) continue;
    
        cout << i << " ";
    }
    
    return 0;
} */


/* Problem 4
int main() {
    int number;
    bool is_prime = true;
    
    cout << "Enter number: "; cin >> number;
    
    for (int i = 2; i <= (number / 2); i++) {
        if (number % i == 0) {
            is_prime = false;
            break;
        }
    }
    
    cout << number << (is_prime ? " is" : " is not") << " prime number" << endl;
    
    return 0;
} */


/* Problem 5
int main() {
    int number = 0;
    
    cout << "Enter number: "; cin >> number;
    
    for (int i = 1; i <= number; i++) {
        cout << i << " * " << i << " = " << (i * i) << endl;
    }
    
    return 0;
} */


/* Problem 6
int main() {
    int max = 0;
    cout << "Enter numbers to find max: ";
    
    while (cin) {
        int number = 0;
        cin >> number;
        
        if (number == 0) break;
        if (number > max) max = number;
    }
    
    cout << "Max: " << max << endl;
    
    return 0;
} */


/* Problem 7
int main() {
    char operation;
    
    cout << "Operations: + - / *: ";
    cin >> operation;
    
    if (operation == '*' || operation == '-' || operation == '+' || operation == '/') {
        bool is_quit = false;
        
        while (!is_quit) {
            int a, b = 0;
            
            cout << "Enter A: "; cin >> a;
            cout << "Enter B: "; cin >> b;
            
            if (a == 0 && b == 0) break;
            
            switch (operation) {
                case '*':
                    cout << "Result: " << a * b << endl;
                    break;
                    
                case '/':
                    cout << "Result: " << a / b << endl;
                    break;
                    
                case '-':
                    cout << "Result: " << a - b << endl;
                    break;
                    
                case '+':
                    cout << "Result: " << a + b << endl;
                    break;
            }
        }
    } else {
        cout << "Incorrect operation" << endl;
    }
    
    
    return 0;
} */


/* Problem 8
int main() {
    int n = 0;
    cout << "Enter number: "; cin >> n;
    
    for (int i = 0; i < n; i++) {
        string result = "";
        
        for (int k = 0; k < n; k++) {
            result += "#";
        }
        
        cout << result << endl;
    }
    
    return 0;
} */


/* Problem 9
int main() {
    int n = 0;
    cout << "Enter number: "; cin >> n;
    
    string result = "";
    
    for (int k = 0; k < n; k++) {
        result += "#";
        cout << result << endl;
    }
    
    return 0;
} */
