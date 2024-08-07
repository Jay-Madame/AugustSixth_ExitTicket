/*
[ ] Create a class template called NumEater, that eats numbers. <br>
    <t> [ ] NumEater should have:<br>
        <t><t> [x] an instance variable sum,<br>
        <t><t> [x] a constructor that initializes sum to zero, <br>
        <t><t> [ ] and two functions:<br>
            <t><t><t> [ ] void eat(T num) and T burp()<br>
*/
#pragma once

template <class T>
class NumEater
{
private:
    T sum;

public:
    NumEater();
    void eat(T num);
    T burp() const;
};