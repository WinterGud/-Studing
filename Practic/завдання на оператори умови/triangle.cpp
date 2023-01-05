#include <iostream>
#include <string>

int main() {
    
    int a, b, c; std::cin >> a >> b >> c;
    if (a > b + c || b > a + c || c > a + b) std::cout << 0;
    else if (a == b && a == c && b == c) std::cout << 1;
    else if (a == b || a == c || b == c) std::cout << 2;
    else if (a != b && a != c && b != c) std::cout << 3;

    return 0;
}
