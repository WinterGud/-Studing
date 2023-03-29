#include <iostream>
#include <cassert>

std::int32_t fac(std::int32_t x);
int C(int n, int m);

int main()
{
    double result = 0.0;

    for (int i = 2; i <= 10; i++)
    {
        double step = C(10.0, i) * pow(1.0 / 6, i) * pow(5.0 / 6, 10 - i);
        result += step;
    }

    std::cout << result;

	return 0;
}

std::int32_t fac(std::int32_t x) {
    static const int table[] = {
        1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600,
    };
    assert(x >= 0);
    assert(x <= 12);
    return table[x];
}

int C(int n, int m)
{
    return fac(n) / (fac(m) * fac(n - m));
}
