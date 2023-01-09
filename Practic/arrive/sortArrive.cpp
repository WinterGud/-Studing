#include <iostream>
#include <algorithm>

int main() {

    int num = 100;
    if (num > 200) return -1;
    int* arr = new int[num];
    for (int i = 0; i < num; i++)
    {
        arr[i] = rand() - rand() / 2;
    }

    for (int i = 0; i < num - 1; ++i)
    {
        int minNum = i;
        for (int j = i + 1; j < num; ++j)
        {
            if (arr[j] < arr[minNum]) minNum = j;
        }
        std::swap(arr[i], arr[minNum]);
    }

    for (int i = 0; i < num; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    


    return 0;
}
