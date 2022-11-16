#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;
    
    const int max_size_of_colors = 6;
    vector<string> colors = {"purple", "green", "blue", "orange", "red", "yellow"};
    vector<string> key_of_colors = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
    
    string user_colors[size];
    
    for (int i = 0; i < size; i++) {
        cin >> user_colors[i];
    }
    
    for (int i = 0; i < size; i++) {
        for (int k = 0; k < max_size_of_colors; k++) {
            if (user_colors[i] == colors[k]) {
                colors[k] = "";
            }
        }
    }
    
    
    int count = 0;
    for (int i = 0; i < colors.size(); i++) {
        if (colors[i].length() > 0) {
            count++;
        }
    }
    
    cout << count << endl;
    
    for (int i = 0; i < colors.size(); i++) {
        if (colors[i].length() > 0) {
            cout << key_of_colors[i] << endl;
        }
    }

    return 0;
}
