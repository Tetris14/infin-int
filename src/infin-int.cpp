/*
** TRISTAN GORY PROJECT, 2022
** infin-int
** File description:
** infin-int
*/

#include "infin-int.hpp"

/*
returns -1 if and error occurs or an overflow
returns 0 if the operation is successful and put the result in the parameter "result"
*/
int add(int *result, int a, int b)
{
    *result = a + b;
    if(a > 0 && b > 0 && *result < 0)
        return -1;
    if(a < 0 && b < 0 && *result > 0)
        return -1;
    return 0;
}

InfinInt::InfinInt(int value)
{
    _value = std::to_string(value);
}

InfinInt::~InfinInt()
{
}

void InfinInt::operator=(const InfinInt &other)
{
    _value = other._value;
}

void InfinInt::operator++(int)
{
    _value = std::to_string(std::stoi(_value) + 1);
}

void InfinInt::operator++()
{
    _value = std::to_string(std::stoi(_value) + 1);
}

void InfinInt::operator--(int)
{
    _value = std::to_string(std::stoi(_value) - 1);
}

void InfinInt::operator+=(const InfinInt &other)
{
    _value = std::to_string(std::stoi(_value) + std::stoi(other._value));
}

std::ostream &operator<<(std::ostream &os, const InfinInt &other)
{
    os << other._value;
    return os;
}