#include <cmath>
#include <iostream>
#include <algorithm>

double fact(int x) {
    int k = 1;
    for (int i = 1; i < x; i++)
    {
        k *= i;
    }
    return k;
}

int main() {
    
    int n, m, c;
    std::cin >> n >> m >> c;
    std::cout << (fact(n) + fact(m)) / fact(c);

    std::cout << std::endl;
    system("pause");
    return 0;
}
