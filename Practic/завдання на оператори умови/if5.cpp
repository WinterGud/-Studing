#include <iostream>
#include <string>

int main() {
    
    int a;
    std::cin >> a;
    if (a > 999) return 0;
    if (a / 100 == 5 || a % 10 == 5 || a / 10 % 10 == 5) std::cout << "True";
    else std::cout << "False";

    return 0;
}
