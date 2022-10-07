#include <iostream>

using namespace std;

/* Problem 1
int main() {
    int day = 0;
    
    cout << "Enter day: ";
    cin >> day;
    
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
            
        default:
            cout << "There is no such weekday" << endl;
            break;
    }
    
    return 0;
} */


/* Problem 2
int main() {
    int grade = 0;
    
    cout << "Grade: ";
    cin >> grade;
    
    switch (grade) {
        case 100:
        case 99:
        case 98:
        case 97:
        case 96:
        case 95:
        case 94:
        case 93:
        case 92:
        case 91:
        case 90:
            cout << "A" << endl;
            break;
         
        case 89:
        case 88:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
            cout << "B" << endl;
            break;
            
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        case 74:
        case 73:
        case 72:
        case 71:
        case 70:
            cout << "C" << endl;
            break;
            
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
            cout << "D" << endl;
            break;
            
        default:
            cout << "F" << endl;
            break;
    }
    
    return 0;
} */


/* Problem 3
int main() {
    int number = 0;
    
    cout << "Number: ";
    cin >> number;
    
    switch (number == 0) {
        case 1:
            cout << "Zero" << endl;
            break;
            
        case 0:
            switch (number > 0) {
                case 1:
                    cout << "Positive" << endl;
                    break;
                case 0:
                    cout << "Negative" << endl;
                    break;
            }
    }
    
    return 0;
} */


/* Problem 4
int main() {
    string word = "";
    int languageCode = 0;
    
    cout << "(1.Spanish 2.German 3.English 4.Russian): ";
    cin >> languageCode;
    
    switch (languageCode) {
        case 1:
            word = "Hola";
            break;
        case 2:
            word = "Hallo";
            break;
        case 3:
            word = "Hello";
            break;
        case 4:
            word = "Привет";
            break;
            
        default:
            word = "There is no such option";
            break;
    }
    
    cout << word << endl;
    
    return 0;
} */


/* Problem 5
int main() {
    int userId = 0;
    
    string name, lastname = "";
    int age = 0;
    
    cout << "User ID: ";
    cin >> userId;
    
    switch (userId) {
        case 1:
            name = "Azizbek";
            lastname = "Savikimov";
            age = 17;
            break;
        case 2:
            name = "Artyom";
            lastname = "Tsay";
            age = 18;
            break;
        case 3:
            name = "Akr";
            lastname = "Akrov";
            age = 18;
            break;
    }
    
    if (name.length() != 0 && lastname.length() != 0 && age > 0) {
        cout << "Name: " << name << endl
             << "Lastname: " << lastname << endl
             << "Age: " << age << endl;
    } else {
        cout << "Wrong ID" << endl;
    }
    
    return 0;
} */


/* Problem 6
int main() {
    int digit = 0;
    string word = "";
    
    cout << "Digit: ";
    cin >> digit;
    
    switch (digit) {
        case 0:
            word = "Zero";
            break;
        case 1:
            word = "One";
            break;
        case 2:
            word = "Two";
            break;
        case 3:
            word = "Three";
            break;
        case 4:
            word = "Four";
            break;
        case 5:
            word = "Five";
            break;
        case 6:
            word = "Six";
            break;
        case 7:
            word = "Seven";
            break;
        case 8:
            word = "Eight";
            break;
        case 9:
            word = "Nine";
            break;
        default:
            word = "It is not a digit";
            break;
    }
    
    cout << word << endl;
    
    return 0;
} */

/* Problem 7
int main() {
    int month = 0;
    string sentense = "";
    
    cout << "Month: ";
    cin >> month;
    
    switch (month) {
        case 1:
            sentense = "In January there is:\n - New Year, 1 January\n - Homeland Defenders’ Day, 14 January";
            break;
        case 3:
            sentense = "In March there is:\n - International Women's Day, 8 March\n - Navruz, 21 March";
            break;
        case 5:
            sentense = "In May there is:\n - Memorial Day, 9 May";
            break;
        case 9:
            sentense = "In September there is:\n - Independence Day, 1 September";
            break;
        case 10:
            sentense = "In October there is:\n - Teachers’ and Mentors’ Day, 1 October";
            break;
        case 12:
            sentense = "In December there is:\n - Constitution Day, 1 December";
            break;
        default:
            sentense = "In February, April, June, July, August, November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change.";
            break;
    }
    
    cout << sentense << endl;
    
    return 0;
} */
