#include <iostream>
#include "sort.hpp" // take sort from ...

int main() {
    int sum = 0;
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
    

    int* newArray = new int[num1 + num2];
    for (int i = 0; i < num1; i++)
    {
        if (i < num1) newArray[i] = arr1[i];
    }
    int j = 0;
    for (int i = num1; i < num1 + num2; i++)
    {
        newArray[i] = arr2[j];
        j++;
    }

    int* newSortArray = Sort(num1 + num2, newArray, '>');
    for (int i = 0; i < num1+num2; i++)
    {
        std::cout << newSortArray[i] << "\t\t\t" << i << std::endl;
    }



    return 0;
}
