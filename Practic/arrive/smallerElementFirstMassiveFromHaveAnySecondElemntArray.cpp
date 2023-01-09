#include <iostream>

int main() {

    int num1 = 100;
    int* arr1 = new int[num1];
    for (int i = 0; i < num1; i++)
    {
        arr1[i] = rand() - rand() / 2;
    }
    int num2 = 500;
    int* arr2 = new int[num2];
    for (int i = 0; i < num2; i++)
    {
        arr2[i] = rand() - rand() / 2;
    }

    int min = arr1[0];
    for (int i = 0; i < num1; ++i)
    {
        for (int j = 0; j < num2; ++j)
        {
            if (arr1[i] == arr2[j]) continue;
            if (arr1[i] < min) min = arr1[i];

        }
    }
    std::cout << min;
    for (int i = 0; i < num2; i++)
    {
        if (arr2[i] == min) std::cout << "ERROR";
    }



    return 0;
}
