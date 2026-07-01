#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char op;

    cout << "===== Simple Calculator =====" << endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            cout << "Result = " << result;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result = " << result;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result = " << result;
            break;

        case '/':
            if(num2 == 0)
            {
                cout << "Error! Division by zero is not allowed.";
            }
            else
            {
                result = num1 / num2;
                cout << "Result = " << result;
            }
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}