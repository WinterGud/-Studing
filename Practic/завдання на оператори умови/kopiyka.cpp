#include <iostream>
int main() {
    int num; std::cin >> num;
    if (num % 10 == 1) std::cout << num << " копійка.";
    else if (num % 10 >= 2 && num % 10 <= 4) std::cout << num << " копійки.";
    else if (num % 10 >= 5 || num % 10 <= 9) std::cout << num << " копійок.";
    else if (num % 10 == 0) std::cout << num << " копійок.";
    return 0;
}
