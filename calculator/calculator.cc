#include <iostream>

using namespace std;

int calc(); 
//Main code block
int main() {
    cout << "Result: " << calc() << endl;
    return 0;
}
//Function to handle the arithmetic calculations
int calc() {
    int num1, num2, result = 0;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        if (num2 == 0) {
            cout << "Error: Cannot divide by zero!" << endl;
            return 0; 
        }
        result = num1 / num2;
    } else {
        cout << "Invalid Operator" << endl;
    }

    return result;
}
