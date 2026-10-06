#include <iostream>
#include "Calculator.h"

using namespace std;

Calculator::Calculator(float n1, float n2)
    : num1(n1), num2(n2), result(0)
{
}

void Calculator::add()
{
    result = num1 + num2;
}

void Calculator::subtract()
{
    result = num1 - num2;
}

void Calculator::multiply()
{
    result = num1 * num2;
}

void Calculator::divide()
{
    if (num2 == 0)
    {
        cerr << "Error: Division by zero!" << endl;
        return;
    }

    result = num1 / num2;
}

void Calculator::modulo()
{
    if (num2 == 0)
    {
        cerr << "Error: Modulo by zero!" << endl;
        return;
    }

    result = static_cast<int>(num1) % static_cast<int>(num2);
}

void Calculator::display()
{
    cout << "The Answer is " << result << endl;
}
