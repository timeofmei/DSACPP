#include <iostream>

int sum(int A[], int n)
{
    if (1 > n)
        return 0;
    else
        return sum(A, n - 1) + A[n - 1];
}

int main()
{
    int A[]{1, 2, 3, 4, 5, 6, 7};
    std::cout << sum(A, sizeof(A) / sizeof(int)) << std::endl;
}
