#include <iostream>
using namespace std;

int main() {
    char A = 'A';
    char character;
    
    cout << "Enter character: ";
    cin >> character;
    
    int repeat = 1;
    for (int i = A; i <= character; i++) {
        for (int j = 0; j < repeat; j++) {
            cout << char(i);
            if (j == (repeat - 1)) cout << endl;
        }
        repeat++;
    }
    
    return 0;
}
