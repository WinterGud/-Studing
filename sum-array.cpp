#include <cmath>
#include <iostream>
#include <algorithm>

//1. Визначити та надрукувати суму усіх елементів матриці. Поділити елементи кожного рядка
//заданої матриці на перший елемент рядка.Отриману матрицю надрукувати.

int main() {

    int Arr[5][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };

    int sum = 0;
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += Arr[i][j];
        }
        std::cout << sum << std::endl;
    }

    std::cout << std::endl;
    system("pause");
    return 0;
}
