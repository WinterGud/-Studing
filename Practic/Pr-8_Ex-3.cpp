#include <cmath>
#include <iostream>
#include <algorithm>

auto bigAvarage() {
    
}


int main() {
    int size;
    std::cin >> size;
    int *Arr = new int[size];
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        Arr[i] = rand() - rand() / 2;
        sum += Arr[i];
    }
    int avarageData = sum / size;
    //std::cout << sum << std::endl;
    //std::cout << avarageData;

    int* bigAvarage = new int[size/2];
    int* smallAvarage = new int[size/2];
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] > avarageData)
        {
            bigAvarage[i] = Arr[i];
            std::cout << bigAvarage[i] << "--- BIG" << std::endl;
        }
        else if (Arr[i] < avarageData)
        {
            smallAvarage[i] = Arr[i];
            std::cout << smallAvarage[i] << "--- SMALL" << std::endl;
        }
    }

    std::cout << std::endl;
    system("pause");
    return 0;
}
