#include <iostream>
using namespace std;

string transform_number_to_word(int number);

int main() {
    int number;
    
    cout << "Enter number: ";
    cin >> number;
    
    string ans = "";
    
    while (number > 0) {
        ans = transform_number_to_word(number % 10) + " " + ans;
        number = number / 10;
    }
    
    cout << "Result: " << ans << endl;
    
    return 0;
}

string transform_number_to_word(int number) {
    string word;
    
    switch (number) {
        case 0:
            word = "zero";
            break;
        case 1:
            word = "one";
            break;
        case 2:
            word = "two";
            break;
        case 3:
            word = "three";
            break;
        case 4:
            word = "four";
            break;
        case 5:
            word = "five";
            break;
        case 6:
            word = "six";
            break;
        case 7:
            word = "seven";
            break;
        case 8:
            word = "eight";
            break;
        case 9:
            word = "nine";
            break;
    }
    
    return word;
}


