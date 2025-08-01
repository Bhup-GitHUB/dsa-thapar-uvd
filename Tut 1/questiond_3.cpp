#include <iostream>

using namespace std;

int main() {
    string option;
    int a, b;
    int result;

    cout << "Enter your choice of operation: A (Addition), S (Subtraction), M (Multiplication), D (Division), MOD (Modulo)" << endl;
    cin >> option;

   
    if (option != "A" && option != "S" && option != "M" && option != "D" && option != "MOD") {
        cout << "Invalid operation!" << endl;
        return 1;  //  program exit
    }

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    
    if (option == "M") {  // Multiplication
        result = a * b;
        cout << "The result is " << result << endl;

    } else if (option == "A") {  // Addition
        result = a + b;
        cout << "The result is " << result << endl;

    } else if (option == "S") {  // Subtraction
        result = a - b;
        cout << "The result is " << result << endl;

    } else if (option == "D") {  // Division
        if (b == 0) {
            cout << "Error: Division by zero is not allowed!" << endl;
        } else {
            result = a / b;
            cout << "The result is " << result << endl;
        }

    } else if (option == "MOD") {  // Modul
        if (b == 0) {
            cout << "Error: Modulo by zero is not allowed!" << endl;
        } else {
            result = a % b;
            cout << "The result is " << result << endl;
        }
    }

    return 0;
}
