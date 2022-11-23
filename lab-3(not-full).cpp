#include <cmath>
#include <iostream>
#include <algorithm>

//1. Визначити та надрукувати суму усіх елементів матриці. Поділити елементи кожного рядка
//заданої матриці на перший елемент рядка.Отриману матрицю надрукувати.

int main() {

    int row, col;
    row = 5;
    col = 4;
    int** Arr = new int*[row];
    for (int i = 0; i < row; i++)
        Arr[i] = new int[col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Arr[i][j] = rand() % 10000;
            std::cout << "Arr[" << i + 1 << "]" << "[" << j + 1 << "]" << " = " << Arr[i][j] << std::endl;
        }
    }
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += Arr[i][j];
        }
        //std::cout << "Покрокова сума = " << sum << std::endl;
    }
    std::cout << "Cумa усіх елементів матриці = " << sum << std::endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            
                Arr[i][j + 1] /= Arr[0][0];
            
            std::cout << "Arr[" << i + 1 << "]" << "[" << j + 1 << "]" << " = " << Arr[i][j] << std::endl;
        }
    }

    std::cout << std::endl;
    system("pause");
    return 0;
}
