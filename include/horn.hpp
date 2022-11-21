#ifndef HORN_HPP
#define HORN_HPP

#include <iostream>

template<typename T>
void printList(T A[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << A[i] << ' ';
    std::cout << std::endl;
}

#endif