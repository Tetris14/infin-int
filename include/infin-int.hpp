/*
** TRISTAN GORY PROJECT, 2022
** infin-int
** File description:
** infin-int
*/

#pragma once

#include <iostream>

class InfinInt
{
    public:
        InfinInt(int value = 0);
        ~InfinInt();
        // operator overloads
        void operator=(const InfinInt &other);
        void operator++();
        void operator--();

        inline void display() const noexcept { std::cout << _value << "\n"; };
    private:
        std::string _value;
};