#include "NumEater.h"
#include <type_traits>
#include <ostream>
#include <iostream>
#include <string>

template <class T>
NumEater<T>::NumEater() : sum(0)
{
}

template <class T>
void NumEater<T>::eat(T num)
{
    if constexpr (std::is_convertible_v<T, T>)
    {
        sum += static_cast<T>(num);
        std::cout << "Nom nom! :3" << std::endl;
    }
    else
    {
        throw std::invalid_argument("Not edible :(... no nom nom </3");
    }
}

template <class T>
T NumEater<T>::burp() const
{
    return sum;
}