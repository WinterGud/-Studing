#include <iostream>
#include <string>

int main() {

    int num; std::cin >> num;
    num = 1000;
    double* arr = new double[num];
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
        std::cout << arr[i] << std::endl;
    } std::cout << maxNum << std::endl;
    int max2 = arr[0];
    int maxNum2;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > max2 && arr[i] < max) 
        { 
            max2 = arr[i];
            maxNum2 = i;
        }
    } std::cout << maxNum2;


    



    return 0;
}
