#include <iostream>
using namespace std;

int main() {
    bool is_passed = false;
    float scores_arr[4] = {0},
          sum = 0,
          pass_score = 7.5,
          average = 0;
    
    cout << "Enter scores: ";
    
    int length = sizeof(scores_arr) / sizeof(scores_arr[0]),
        i = 0;
    while (i < length) {
        cin >> scores_arr[i];
        sum += scores_arr[i];
        i++;
    }
    
    average = sum / length;
    is_passed = average >= pass_score;
    
    cout << "Your score is " << average << endl;
    cout << "You " << (is_passed ? "can" : "cannot") << " apply" << endl;
    
    
    return 0;
}
