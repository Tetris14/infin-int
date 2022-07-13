/*
** TRISTAN GORY PROJECT, 2022
** infin-int
** File description:
** infin-int
*/

#include "infin-int.hpp"

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

std::ostream &operator<<(std::ostream &os, const InfinInt &other)
{
    os << other._value;
    return os;
}