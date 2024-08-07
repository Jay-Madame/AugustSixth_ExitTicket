/*
[x] Create a function template cube_it, that returns the cube of any data type that implements the * operator. <br>
    <t>[x] Demonstrate cube_it with both ints and doubles.<br>
*/

#include <iostream>
#include <ctime>

template <class T>
T cube_it(T number)
{
    return (number * number * number);
}

void testForCube();

int main()
{
    srand(time(0));

    return 0;
}

void testForCube()
{
    int ex;
    double example;

    ex = rand() % 10;
    example = (rand() % 10) * 1.0;
    std::cout << cube_it(ex) << std::endl;
    std::cout << cube_it(example) << std::endl;
}