#include <iostream>
#include <string>

int main() {

    int num = 100;
    if (num > 200) return -1;
    int* arr = new int[num];
    for (int i = 0; i < num; i++)
    {
        arr[i] = rand() - rand() / 2;
    }

    int max = arr[0];
    int maxNum;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > max) 
        {
            max = arr[i];
            maxNum = i;

        }
    }
    int min = arr[0];
    int minNum;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minNum = i;
        }
        else continue;
    }

    int sum = 0;
    for (int i = maxNum; i <= minNum; i++)
    {
        sum += arr[i];
        std::cout << sum << std::endl;
    }


    


    return 0;
}
