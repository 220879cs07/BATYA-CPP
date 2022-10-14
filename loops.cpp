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


/* Problem 10
int main() {
    int number = 0;
    double one = 1;
    double sum = 0;
    
    cout << "Enter number: "; cin >> number;
    
    for (int i = 1; i <= number; i++) {
        sum += (one / i);
    }
    
    cout << "Result: " << sum << endl;
    
    return 0;
} */


/* Problem 11
int main() {
    int binary = 0;
    
    cout << "Enter binary: "; cin >> binary;
    
    int decimal = 0;
    int power = 0;

    while (binary != 0) {
        int reminder = binary % 10;
        binary = binary / 10;

        decimal += reminder * pow(2, power);
        power++;
    }
    
    cout << "The decimal number is " << decimal << endl;
    
    return 0;
} */


/* Problem 12
int main() {
    int number = 0;
    int sum = 0;
    
    cout << "Enter number: "; cin >> number;
    
    while (number != 0) {
        int last_digit = number % 10;
        number = number / 10;
        
        sum += last_digit;
    }
    
    cout << "The sum of digits is " << sum << endl;
} */


/* Problem 13
int main() {
    int count_subjects = 0;
    float total = 0;
    
    cout << "Enter count of subjects: "; cin >> count_subjects;
        
    for (int i = 1; i <= count_subjects; i++) {
        float value = 0;
        
        cout << i << ") "; cin >> value;
        
        total += value;
    }
    
    cout << "Your total GPA is " << (total / count_subjects) << endl;
    
    return 0;
} */


/* Problem 14
int main() {
    int number = 0;
    
    cout << "Enter number: "; cin >> number;
    
    if (number != 0) {
        for (int i = 1; i <= number; i++) {
            string value = "";
            
            for (int j = 0; j < i; j++) {
                value += to_string(i);
            }
            
            cout << value << endl;
        }
    } else {
        cout << "The depth is 0" << endl;
    }
} */
