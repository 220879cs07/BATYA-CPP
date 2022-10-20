#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << rand() << endl;
    }

    return 0;
}

