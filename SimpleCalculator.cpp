#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char c;
    cout << "Enter an operator: +, -, *, / \n";
    cin >> c;

    cout << "Enter two numbers: \n";
    cin >> num1 >> num2;

    switch (c)
    {
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2;
        break;

    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2;
        break;

    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;

    case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2;
        break;

    default:
        cout << "Error! Invalid operator";
        break;
    }

    return 0;
}