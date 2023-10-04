#include <iostream>
using namespace std;

int main() {
    // Declare necessary variables
    double num1,num2;
    char opp;
    // Implement logic to perform the arithmetic operation based on user input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> opp;
    // Display the result
    if(opp=='+'){
        cout << "Result: " << num1 + num2 << endl;
    }else if(opp=='-'){
        cout << "Result: " << num1 - num2 << endl;
    }else if(opp=='*'){
        cout << "Result: " << num1 * num2 << endl;
    }else if(opp=='/'){
        cout << "Result: " << num1 / num2 << endl;
    }
