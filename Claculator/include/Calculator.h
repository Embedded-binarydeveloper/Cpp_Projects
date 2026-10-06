#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
    float num1;
    float num2;
    float result;

public:
    Calculator(float n1 = 0, float n2 = 0);

    void add();
    void subtract();
    void multiply();
    void divide();
    void modulo();

    void display();
};

#endif
