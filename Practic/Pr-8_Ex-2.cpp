#include <cmath>
#include <iostream>
#include <algorithm>

auto maxElement(int size) {
    int* Arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        Arr[i] = rand();
    }
    int* max = std::max_element(Arr, Arr + size);
    return *max;
}

int main() {

    std::cout << maxElement(50);

    std::cout << std::endl;
    system("pause");
    return 0;
}
