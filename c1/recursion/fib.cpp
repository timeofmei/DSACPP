#include <iostream>

long fib(long n)
{
    return (2 > n) ? n : fib(n - 1) + fib(n - 2);
}

long fibI(long n)
{
    long f = 1, g = 0;
    while (0 < n--)
    {
        g += f;
        f = g - f;
    }
    return g;
}

int main(int argc, char** argv)
{
    int num = std::stoi(argv[1]);
    std::cout << fib(num) << std::endl;
}
