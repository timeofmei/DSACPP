#include "horn.hpp"
#include "magic.hpp"
#include <iostream>

int shift(int A[], int n, int s, int k)
{
    int b = A[s];
    int i = s;
    int j = (s + k) % n;
    int mov = 0;
    while (s != j)
    {
        A[i] = A[j];
        i = j;
        j = (j + k) % n;
        mov++;
    }
    A[i] = b;
    return mov + 1;
}

void shift0(int A[], int n, int k)
{
    while (k--)
        shift(A, n, 0, 1);
}

void shift1(int A[], int n, int k)
{
    for (int s = 0, mov = 0; mov < n; s++)
    mov += shift(A, n, s, k);
}

void shift2(int A[], int n, int k)
{
    reverse(A, k);
    reverse(A + k, n - k);
    reverse(A, n);
}

int main(int argc, char** argv)
{
    int A[]{1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(A) / sizeof(int);
    printList(A, size);
    shift1(A, size, std::stoi(argv[1]));
    printList(A, size);
}