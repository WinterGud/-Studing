#include <iostream>
#include <string>

int main() {
    
    int a, b, c; std::cin >> a >> b >> c;
    if (a == 0) return -1;
    double D = pow(b, 2) - 4 * a * c;
    if (D < 0)  std::cout << "NO"; return -1;
    double t1 = (-b - sqrt(D)) / (2 * a);
    double t2 = (-b + sqrt(D)) / (2 * a);
    std::cout << t1 * t1 << std::endl;
    std::cout << t2 * t2 << std::endl;

    return 0;
}
