#include <iostream>

using namespace std;

double num1, num2;
char symbol;

void ChooseNumber();
void ChooseOperator();
void Calculate();

int main()
{
    ChooseNumber();
    ChooseOperator();

    Calculate();

    return 0;
}

void ChooseNumber()
{
    cout << "Please enter first number: ";
    cin >> num1;

    cout << "Please enter second number: ";
    cin >> num2;
}

void ChooseOperator()
{
    cout << "Please enter an operator (+, -, *, /): ";
    cin >> symbol;
}

void Calculate()
{
    switch (symbol)
    {
        case '+':
            cout << "Result: " << (num1 + num2);
        break;
        case '-':
            cout << "Result: " << (num1 - num2);
        break;
        case '*':
            cout << "Result: " << (num1 * num2);
        break;
        case '/':
            cout << "Result: " << (num1 / num2);
        break;
        default:
            cout << "Error!";
    }
}
