#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int  num1, num2;
    cout << "Time waste calculator" << endl;
    cout << "[operators available: +, -, *, /, %, ^(for power), r(for root)]" << endl << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    bool continue_cal=true;
    while (continue_cal) {
        cout << "Choose an operation: ";
        char op;
        double result;
        cin >> op;

        switch (op) {
            case '+':
                result= num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case '-':
                result= num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case '*':
                result= num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case '/':
                if (num2 != 0){
                    int result= num1 / num2;
                    cout << "Result: " << result << endl;
                }else{
                    cout << "Error: Division by zero!" << endl;
                }
                break;
                case '%':
                if (num2 != 0){
                    int result= num1 % num2;
                    cout << "Result: " << result << endl;
                }
                break;
                case '^':
                if (num2 != 0){
                    result = pow(num1, num2);
                    cout << "Result: " << result << endl;
                }
                break;
                case 'r':
                if (num2 != 0){
                    result = pow(num1, 1.0 / num2);
                    cout << "Result: " << result << endl;
                }
                break;
            default:
                cout << "Invalid operation!" << endl;
        }
        num1 = result;
        cout << "Do you want to perform another calculation? (y/n): ";
        char choice;
        cin >> choice;

        if (choice == 'n' || choice == 'N') {
            continue_cal = false;
        }else{
            cout << "Enter another number to perform calculation: ";
            cin >> num2;
            cout << "Will perform another calculation between " << num1 << " and " << num2 << endl; 
        }
    }

    return 0;      
}