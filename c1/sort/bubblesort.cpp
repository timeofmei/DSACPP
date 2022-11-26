#include "horn.hpp"
#include "magic.hpp"

void bubblesort1A(int A[], int n)
{
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (int i = 1; i < n; i++)
        {
            if (A[i - 1] > A[i])
            {
                swap(A[i - 1], A[i]);
                sorted = false;
            }
        }
        n--;
    }
}

int main()
{
    int A[] = {5, 2, 7, 4, 6, 3, 1};
    int size = sizeof(A) / sizeof(int);
    printList(A, size);
    bubblesort1A(A, size);
    printList(A, size);
}