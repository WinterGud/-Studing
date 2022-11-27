#include <cmath>
#include <iostream>
#include <algorithm>

//1. Знайти суму елементів вище головної діагоналі. Перевірку чи елемент вище головної діагоналі
//здійснювати у функції.

int upDiagonal() {
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
            Arr[i][j] = rand() % 1000 - (rand() % 1000 / 2);
            std::cout << "Arr[" << i + 1 << "]" << "[" << j + 1 << "]" << " = " << Arr[i][j] << std::endl;
        }
    }

    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j > i)
            {
                sum += Arr[i][j];
            }
        }
        //std::cout << sum << std::endl;
    }
    return sum;
}

int main() {

    std::cout << "Сума елементів які вище головної діагоналі: " << upDiagonal() << std::endl;

    std::cout << std::endl;
    system("pause");
    return 0;
}
