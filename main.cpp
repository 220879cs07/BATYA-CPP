#include <string>
#include <iostream>
#include <math.h>

using namespace std;

/* Problem 1
int main() {
    int number = 0;
    
    cout << "Integer: ";
    cin >> number;
    
    (number >= 0)
        ? cout << number << " is positive" << endl
        : cout << number << " is negative" << endl;
    
    return 0;
} */


/* Problem 2
int main() {
    int number = 0;
    
    cout << "Integer: ";
    cin >> number;
    
    (number % 2 == 0)
        ? cout << number << " is even" << endl
        : cout << number << " is odd" << endl;
    
    return 0;
} */
  

/* Problem 3
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int the_largest = 0;
    
    cout << "A number: ";
    cin >> a;
    
    cout << "B number: ";
    cin >> b;
    
    cout << "C number: ";
    cin >> c;
    
    if (a > b && a > c) {
        the_largest = a;
    } else if (b > a && b > c) {
        the_largest = b;
    } else {
        the_largest = c;
    }
    
    cout << the_largest << " is the largest" << endl;
    
    return 0;
} */


/* Problem 4
int main() {
    int year = 2022;
    
    cout << "Check year: ";
    cin >> year;
    
    (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))
        ? cout << year << " is leap year" << endl
        : cout << year << " is not leap year" << endl;
} */


/* Problem 5
int main() {
    float a = 0;
    float b = 0;
    float c = 0;
    
    cout << "A number: ";
    cin >> a;
    
    cout << "B number: ";
    cin >> b;
    
    cout << "C number: ";
    cin >> c;
    
    float D = sqrt((b*b) - 4 * a * c);
    
    double x1 = (-(b) + D) / (2 * a);
    double x2 = (-(b) - D) / (2 * a);
    
    cout << "X1 = " << x1 << endl;
    cout << "X2 = " << x2 << endl;
    
    return 0;
} */


/* Problem 6
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    
    cout << "Value A: ";
    cin >> a;
    
    cout << "Value B: ";
    cin >> b;
    
    cout << "Value C: ";
    cin >> c;
    
    ((a + b + c) <= 180)
        ? cout << "The triangle is valid" << endl
        : cout << "The triangle isn't valid" << endl;
    
    return 0;
} */


/* Problem 7
int main() {
    char character;
    
    cout << "Type character: ";
    cin >> character;
    
    if (character >= 'A' && character <= 'Z') {
        cout << "Uppercase alphabet" << endl;
    } else if (character >= 'a' && character <= 'z') {
        cout << "Lowercase alphabet" << endl;
    } else {
        cout << "It is not an alphabet" << endl;
    }
    
    return 0;
} */


/* Problem 8
int main() {
    string name = "";
    
    cout << "Type your name: ";
    cin >> name;
    
    (name == "Johnson" || name == "Smith" || name == "Anderson" || name == "Bennett" || name == "Jack-son")
        ? cout << "You have access" << endl
        : cout << "You do not have access" << endl;
    
    return 0;
} */
