#include <iostream>
#include <string>

int main() {

    int num; std::cin >> num;
    num = 1000;
    double* arr = new double[num];
    for (int i = 0; i < num ; i++)
    {
        arr[i] = rand();
        std::cout << arr[i] << std::endl;
    }
     
    int ser = 0;
    for (int i = 0; i < num; i++)
    {
        ser += arr[i];
    }ser /= num;
    std::cout << ser << std::endl;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] < ser) arr[i] *= 2;
        else if (arr[i] > ser) arr[i] /= 2;
        std::cout << arr[i] << std::endl;
    }
    



    return 0;
}
