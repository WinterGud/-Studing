#include <iostream>
#include "sort.hpp" // take it from https://github.com/WinterGud/-Studing/tree/main/My%20Own%20Scripts

int main() {

    int num = 100;
    if (num > 200) return -1;
    int* arr = new int[num];
    for (int i = 0; i < num; i++)
    {
        arr[i] = rand() - rand() / 2;
    }

    int* arrNoSort = new int[num];
    for (int i = 0; i < num; i++)
    {
        arrNoSort[i] = arr[i];
    }

    int* arrSort = Sort(num, arr, '>');
    
    int elementsOnOwnPlace = 0;
    for (int i = 0; i < num; i++)
    {
        if (arrNoSort[i] == arrSort[i]) elementsOnOwnPlace += 1;
        std::cout << arrNoSort[i] << "\t\t\t" << arrSort[i] << std::endl;
    }std::cout << elementsOnOwnPlace;


    return 0;
}
