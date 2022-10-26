#include <iostream>
using namespace std;

int main() {
    int number = 0;
    string result;
    
    cout << "Enter positive or negative number: ";
    cin >> number;
    
    switch (number > 0) {
        case 1:
            result = "positive";
            break;
        case 0:
            switch (number == 0) {
                case 1:
                    result = "zero";
                    break;
                case 0:
                    result = "negative";
                    break;
            }
    }
    
    cout << result << endl;

    return 0;
}
