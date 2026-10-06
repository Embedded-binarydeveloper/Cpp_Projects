# C++ OOP Calculator

A command-line calculator developed in C++ to practice object-oriented programming concepts, class design, constructors, encapsulation, and basic error handling.

## Features

* Addition
* Subtraction
* Multiplication
* Division
* Modulo
* Division-by-zero protection
* Continuous calculation using a loop
* Menu-driven interface

## C++ Concepts Practiced

* Classes and Objects
* Encapsulation
* Constructors
* Default Arguments
* Member Initializer Lists
* Member Functions
* Private Data Members
* `switch` Statements
* Loops
* Conditional Statements
* Error Handling
* `cout` and `cerr`
* Header and Source File Separation

## Project Structure

```text
cpp-calculator/
│
├── README.md
├── include/
│   └── Calculator.h
│
├── src/
│   ├── Calculator.cpp
│   └── main.cpp
│
├── screenshots/
│   └── output.png
│
└── .gitignore
```

## How It Works

The `Calculator` class stores two operands and the calculated result.

```cpp
Calculator obj(num1, num2);
```

The required operation is performed through member functions:

```cpp
obj.add();
obj.subtract();
obj.multiply();
obj.divide();
obj.modulo();
```

The class encapsulates both the calculator's data and the operations performed on that data.

## Error Handling

Division and modulo operations check for zero before performing the calculation.

```cpp
if (num2 == 0)
{
    cerr << "Error: Division by zero!" << endl;
    return;
}
```

## Example

```text
Welcome to the Calculator!

Enter two numbers: 20 5

1 -> Addition
2 -> Subtraction
3 -> Multiplication
4 -> Division
5 -> Modulo

4

The Answer is 4

Do you want to continue? (y/n): n

Thank You!
```

## What I Learned

This project helped me understand how to identify the responsibilities of a class.

### Calculator Object HAS

* `num1`
* `num2`
* `result`

### Calculator Object CAN

* Add
* Subtract
* Multiply
* Divide
* Calculate modulo

This helped me understand the relationship between **data and behavior in object-oriented programming**.

## Future Improvements

* Add square root and power operations
* Add percentage calculation
* Improve input validation
* Support floating-point modulo using an appropriate mathematical approach
* Add unit tests
* Add CMake build support

## Author

Praju Gowda
