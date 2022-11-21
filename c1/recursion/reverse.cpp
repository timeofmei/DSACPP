#include "horn.hpp"
#include "magic.hpp"

void reverse(int A[], int lo, int hi)
{
    if (lo < hi)
    {
        swap(A + lo, A + hi);
        reverse(A, lo + 1, hi - 1);
    }
}

int main()
{
    int A[]{1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(A) / sizeof(int);
    printList(A, size);
    reverse(A, 0, size - 1);
    printList(A, size);
}