/*
[x] Create a function template cube_it, that returns the cube of any data type that implements the * operator. <br>
    <t>[x] Demonstrate cube_it with both ints and doubles.<br>
*/

#include "NumEater.h"
#include "NumEater.cpp"
#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>

void testForCube(int ex, double example);
void testNumEater(int ex, double example);
int generateNumber();

int main()
{
    srand(time(0));

    int ex;
    double example;

    ex = generateNumber();
    example = generateNumber() * 1.0;

    std::cout << "Num 1: " << ex << std::endl;
    std::cout << std::setprecision(2) << std::fixed << "Num 2: " << std::to_string(example) << std::endl;
    testForCube(ex, example);
    testNumEater(ex, example);
    return 0;
}

template <class T>
T cube_it(T number)
{
    return (number * number * number);
}
void testForCube(int ex, double example)
{
    std::cout << cube_it(ex) << std::endl;
    std::cout << std::setprecision(2) << std::fixed << std::to_string(cube_it(example)) << std::endl;
}

void testNumEater(int ex, double example)
{
    NumEater<int> intEater;
    NumEater<double> doubleEater;

    std::cout << "Round 1: (number is " << ex << ")" << std::endl;
    intEater.eat(ex);
    doubleEater.eat(ex);

    for (int i = 0; i < 3; i++)
    {
        int newNum = generateNumber();
        std::cout << "Round " << (i + 2) << ": (number is " << newNum << ")" << std::endl;
        intEater.eat(newNum);
        doubleEater.eat(newNum);
    }

    std::cout << std::setprecision(2) << std::fixed << "Round 5: (number is " << std::to_string(example) << ")" << std::endl;
    float ex2 = static_cast<float>(example);

    intEater.eat(ex2);
    doubleEater.eat(ex2);

    std::cout << std::to_string(intEater.burp()) << std::endl;
    std::cout << std::setprecision(2) << std::fixed << std::to_string(doubleEater.burp()) << std::endl;
}

int generateNumber()
{
    return (1 + (rand() % 10));
}