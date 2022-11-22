#ifndef MAGIC_H
#define MAGIC_H

template<typename T>
void swap(T* a, T* b)
{
    T tmp = *a;
    *a = *b;
    *b = tmp;
}

template<typename T>
void reverse(T A[], int lo, int hi)
{
    if (lo < hi)
    {
        swap(A + lo, A + hi);
        reverse(A, lo + 1, hi - 1);
    }
}

template<typename T>
void reverse(T A[], int length)
{
    reverse(A, 0, length - 1);
}

#endif
