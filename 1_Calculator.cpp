#include <iostream>
#include <cmath>
using namespace std;

void showMenu() {
    cout << "\nCalculator Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exponentiation" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Trigonometric Functions (sin, cos, tan)" << endl;
    cout << "8. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    int choice;
    double num1, num2;
    
    do {
        showMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            case 6:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 >= 0)
                    cout << "Result: " << sqrt(num1) << endl;
                else
                    cout << "Error: Cannot compute square root of a negative number!" << endl;
                break;
            case 7:
                cout << "Enter an angle in degrees: ";
                cin >> num1;
                num1 = num1 * M_PI / 180; // Convert to radians
                cout << "sin(" << num1 << ") = " << sin(num1) << endl;
                cout << "cos(" << num1 << ") = " << cos(num1) << endl;
                cout << "tan(" << num1 << ") = " << tan(num1) << endl;
                break;
            case 8:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 8);
    
    return 0;
}
