#include <cmath>
#include <iostream>
#include <algorithm>

int main() {
    int row, col;
    std::cout << "Введіть кількість рядків: ";
    std::cin >> row;
    std::cout << "Введіть кількість стовпців: ";
    std::cin >> col;

    int** Arr = new int* [row];
    for (int i = 0; i < row; i++)
        Arr[i] = new int[col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Arr[i][j] = rand() % 100 - ((rand() % 100) / 2);
            //std::cout << "Arr[" << i + 1 << "]" << "[" << j + 1 << "]" << " = " << Arr[i][j] << std::endl;
        }
    }

    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += Arr[i][j];
        }
        //std::cout << sum << std::endl;
    }
    std::cout << "Сума всіх елементів матриці = " << sum << std::endl;
    std::cout << "------------------------------------------------------------------------" << std::endl;
    std::cout << "Елемент кожного рядка заданої матриці поділений на перший елемент рядка:" << std::endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Arr[i][j + 1] /= Arr[i][0];
            //std::cout << "Arr[" << i + 1 << "]" << "[" << j + 1 << "]" << " = " << Arr[i][j] << std::endl;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Arr[i][0] /= Arr[i][0];
            std::cout << "Arr[" << i + 1 << "]" << "[" << j + 1 << "]" << " = " << Arr[i][j] << std::endl;
        }
    }

    std::cout << std::endl;
    system("pause");
    return 0;
}
