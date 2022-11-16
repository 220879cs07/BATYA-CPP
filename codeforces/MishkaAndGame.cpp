#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    
    int matrix[size][2];
    
    for (int i = 0; i < size; i++) {
        cin >> matrix[i][0] >> matrix[i][1];
    }
    
    int first_player = 0;
    int second_player = 0;
    
    for (int i = 0; i < size; i++) {
        if (matrix[i][0] == matrix[i][1]) {
            first_player++;
            second_player++;
        } else if (matrix[i][0] > matrix[i][1]) {
            first_player++;
        } else {
            second_player++;
        }
    }
    
    string message;
    if (first_player == second_player) {
        message = "Friendship is magic!^^";
    } else if (first_player > second_player) {
        message = "Mishka";
    } else {
        message = "Chris";
    }
    
    cout << message;
    
    return 0;
}
