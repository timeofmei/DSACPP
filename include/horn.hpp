#ifndef HORN_HPP
#define HORN_HPP

#include <iostream>

template<typename T>
void printList(T A[])
{
    for (T a: A)
        std::cout << a << ' ';
    std::cout << std::endl;
}

#endif