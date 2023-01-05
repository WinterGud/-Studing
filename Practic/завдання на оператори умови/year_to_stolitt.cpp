#include <iostream>
#include <string>

int main() {
    
    int y; std::cin >> y;
    if (y % 100 == 0) std::cout << y / 100;
    else std::cout << y / 100 + 1;

    return 0;
}
