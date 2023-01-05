#include <iostream>
#include <string>

std::string ballInRomb(int R, int p, int a) {
    if (a > 90) std::cout << "Кут має бути гострим.";
    if ((R * R) < (p * p * sin(a))) return "True";
    else return "False";
}

int main() {
    
    std::cout << ballInRomb(2, 4, 45);

    return 0;
}
